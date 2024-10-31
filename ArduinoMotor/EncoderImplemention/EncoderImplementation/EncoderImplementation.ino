#define ENCODER_A_PIN 2  // Channel A
#define ENCODER_B_PIN 3  // Channel B
#define STOP_PIN 4 // Stop pin for testing 
#define CW_PIN 5 // Clockwise motor pin
#define CCW_PIN 6 // Counter-clockwise motor pin

#define ppr 10347 // Pulses per revolution of your encoder

volatile long positionCount = 0;
int lastAState = LOW;
float degreesPerPulse = 2*math.pi / (float)ppr;
 
void setup() {
  pinMode(ENCODER_A_PIN, INPUT);
  pinMode(ENCODER_B_PIN, INPUT);
  pinMode(CCW_PIN, OUTPUT);
  pinMode(CW_PIN, OUTPUT);
  pinMode(STOP_PIN, OUTPUT);
  digitalwrite(CW_PIN, LOW);
  digitalwrite(CCW_PIN, LOW);
  digitalwrite(STOP_PIN, LOW);
  attachInterrupt(digitalPinToInterrupt(ENCODER_A_PIN), updatePosition, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCODER_B_PIN), updatePosition, CHANGE);
  Serial.begin(115200);
  //Serial.print("degreesPerPulse:");
  //Serial.println(degreesPerPulse);
}
 
void loop() {
  float angle = positionCount * degreesPerPulse;

  Serial.print("Current angle: ");
  Serial.println(180*angle/math.pi);
  

  delay(100);
}
 
//void angleLimitLogic(float goalAngle) {
//  direction == (goalAngle - angle <= 0) 
//  
//
//}



void updatePosition() {
  int aState = digitalRead(ENCODER_A_PIN);
  int bState = digitalRead(ENCODER_B_PIN);

 
  if (aState != lastAState) {
    if (aState == HIGH && bState == LOW || aState == LOW && bState == HIGH){
      positionCount++; // Clockwise
    } else {
      positionCount--; // Counter-clockwise
    }
  }
  lastAState = aState;
}

void refTracking(float deltaRotation){
  goalPositionCount = positionCount + deltaRotation*ppr/360;
  allowedTrackingError= ppr*12/360;
  while(!(isInRange(positionCount, goalPositionCount-allowedTrackingError, goalPositionCount+allowedTrackingError))){ 
    if(positionCount<goalPositionCount){
      digitalwrite(CW_PIN, LOW);
      digitalwrite(CCW_PIN, HIGH);
    }
    if(positionCount<goalPositionCount){
      digitalwrite(CCW_PIN, LOW);
      digitalwrite(CW_PIN, HIGH);
    }
  }
  digitalwrite(CW_PIN, LOW);
  digitalwrite(CCW_PIN, LOW);
  digitalwrite(STOP_PIN, HIGH);
}