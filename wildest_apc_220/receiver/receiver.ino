#include <SoftwareSerial.h>

SoftwareSerial apc220Serial(14, 15);

const int ledPin = LED_BUILTIN; // Pin for the onboard LED
int blinkRate = 1;             // Default blink rate in Hz
unsigned long previousMillis = 0; // Stores the last time the LED state was updated
bool ledState = LOW;              // Current state of the LED

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
  Serial.begin(9600); // Start serial communication at 9600 baud
  Serial.println();
  
  apc220Serial.begin(9600);
  //while (!apc220Serial){}
}

void loop() {
    if (apc220Serial.available() > 0) {
    char received = apc220Serial.read();
    Serial.println(received);
    if (received >= '1' && received <= '9')
    {
      blinkRate = received - '0';
    }
    apc220Serial.println();
  //}

  unsigned long interval = 1000 / blinkRate;

  if (millis() - previousMillis >= interval / 2) {
    previousMillis = millis();
    ledState = !ledState; // Toggle the LED state
    digitalWrite(ledPin, ledState);
  }
}
