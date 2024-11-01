#define ENCODER_A_PIN 2  // Channel A
#define ENCODER_B_PIN 3  // Channel B
#define STOP_PIN 4 // Stop pin for testing 
#define CW_PIN 5 // Clockwise motor pin
#define CCW_PIN 6 // Counter-clockwise motor pin
#define ALLOWEDERROR 2



volatile long positionCount = 0;
int lastAState = LOW;
const float ppr = 10347;  // Pulses per revolution of your encoder
float degreesPerPulse = (float)ppr / 180;
float goalAngle = 0;
 
void setup() {
  pinMode(ENCODER_A_PIN, INPUT);
  pinMode(ENCODER_B_PIN, INPUT);
  pinMode(CCW_PIN, OUTPUT);
  pinMode(CW_PIN, OUTPUT);
  pinMode(STOP_PIN, OUTPUT);
  digitalWrite(CW_PIN, LOW);
  digitalWrite(CCW_PIN, LOW);
  digitalWrite(STOP_PIN, LOW);
  attachInterrupt(digitalPinToInterrupt(ENCODER_A_PIN), updatePosition, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCODER_B_PIN), updatePosition, CHANGE);
  Serial.begin(115200);

  goalAngleInput = (Serial.readStringUntil('\n').toFloat()); // Read the input goalAngle and convert to float
  goalAngle = fmod((goalAngleInput+180), (360 - 180); // Ensure input goalAngle are not out of bounds
  
  //Serial.print("degreesPerPulse:");
  //Serial.println(degreesPerPulse);
}
 
void loop() {
  float currentAngle = fmod((positionCount * degreesPerPulse + 180),(360 - 180));
  Serial.print("Current angle: ");
  Serial.println(currentAngle);
  refTracking(getDeltaRotation(currentAngle, goalAngle));
  delay(100);
}


 
// float getDeltaRotation(float currentAngle, float goalAngle){ // currentangle{
//   bool counterClockwise = ?(goalAngle - currentAngle > 0) : -1; // direction of travel
//   return counterClockwise * (goalAngle - currentAngle / 180); // delta angle

// }

float getDeltaRotation(float currentAngle, float goalAngle) { //Chatgpt did this one but if you want you can debug yours
  float delta = goalAngle - currentAngle;
  if (delta > 180) {
    delta -= 360; 
  } else if (delta < -180) {
    delta += 360;  
  }
  return delta;
}




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


void refTracking(float deltaRotation) {
  long int goalPositionCount = positionCount + deltaRotation*ppr/360;
  long int allowedTrackingError= ppr*ALLOWEDERROR/360;
  Serial.println(goalPositionCount);
  Serial.println(allowedTrackingError);
  while (!(positionCount > goalPositionCount - allowedTrackingError && positionCount <= goalPositionCount + allowedTrackingError)) { 
    if (positionCount < goalPositionCount) {
      digitalWrite(STOP_PIN, LOW);
      digitalWrite(CW_PIN, LOW);
      digitalWrite(CCW_PIN, HIGH);
    }
    if (positionCount > goalPositionCount) {
      digitalWrite(STOP_PIN, LOW);
      digitalWrite(CCW_PIN, LOW);
      digitalWrite(CW_PIN, HIGH);
    }
    delay(10);
  }
  digitalWrite(CW_PIN, LOW);
  digitalWrite(CCW_PIN, LOW);
  digitalWrite(STOP_PIN, HIGH);
}
