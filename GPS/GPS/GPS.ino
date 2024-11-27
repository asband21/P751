#include <TinyGPS++.h>
#include <SoftwareSerial.h>

TinyGPSPlus gps;
SoftwareSerial ss(10, 11); // RX, TX pins

void setup() {
  Serial.begin(9600);
  ss.begin(9600);
  Serial.println("GPS Module Test");
}

void loop() {
  delay(200);
  while (ss.available() > 0) {
    char c = ss.read();
    gps.encode(c);
    Serial.print("test");
    
    // Check if GPS data is updated
    if (gps.location.isUpdated()) {

      Serial.print("Latitude: "); Serial.println(gps.location.lat(), 6);
      Serial.print("Longitude: "); Serial.println(gps.location.lng(), 6);
      Serial.print("Altitude: "); Serial.println(gps.altitude.meters());
    }
  }
}
