/*///////////////////////////////////////////////////////////////////////////////////////////////
This is one half of a script for the 2024 7th semester project "Adaptive and Self-tuning Control
Strategies for Dynamic Positioning of Marine Crafts". This script is for the arduino mega on the boat
and handles GPS and radio communication. It recieves the error calculated by the other half of the script
which is at a base station on solid ground. The error indicates disturbances in the GPS signal, which
is relatively similar enough for the two arduino, that it can be used for noise compensation. The error
is recieved over radio.

Input: Error Measurement at 1Hz   Output: GPS data with error compensation at 1Hz

*////////////////////////////////////////////////////////////////////////////////////////////////



#include <TinyGPS++.h>
#include <SoftwareSerial.h>

#define GPS_RX 10
#define GPS_TX 11
#define WINDOW_SIZE 5

TinyGPSPlus gps;
SoftwareSerial gpsSerial(GPS_RX, GPS_TX);

double rollingLat[WINDOW_SIZE] = {0};
double rollingLng[WINDOW_SIZE] = {0};
double rollingAlt[WINDOW_SIZE] = {0};
double avgLat = 0, avgLng = 0, avgAlt = 0;
double correctedLat = 0;
double correctedLng = 0;
int count = 0;
int calibrationLoading = 0; // The loading screen for when base station is calibrating

void setup() {
  Serial.begin(9600);  // For PC communication
  gpsSerial.begin(9600);  // GPS module communication

  //// Radio Comm Section ////
  Serial1.begin(9600);
  ////       ////         ////
}

void loop() {
  while (gpsSerial.available() > 0) {
    char c = gpsSerial.read();
    gps.encode(c);

    if (gps.location.isUpdated()) {
      double lat = gps.location.lat();
      double lng = gps.location.lng();
      double alt = gps.altitude.meters();
      int satellites = gps.satellites.value();

      updateRollingAverage(rollingLat, lat, avgLat);
      updateRollingAverage(rollingLng, lng, avgLng);
      updateRollingAverage(rollingAlt, alt, avgAlt);

      // Print data to serial in CSV format
 /*   Serial.print(avgLat, 6);
      Serial.print(",");
      Serial.println(avgLng, 6);
      Serial.print(",");
      Serial.println(avgAlt, 2);
      Serial.println(satellites); */


      ///   Radio Comms Section   /// 
      if (Serial1.available()) {
        String received = Serial1.readStringUntil('\n'); // Read until newline character

        // Find the comma separating the packages
        int commaIndex = received.indexOf(',');

        if (commaIndex != -1) {
          String xValue = received.substring(0, commaIndex);
          String yValue = received.substring(commaIndex + 1);

          // Convert the string values to doubles
          double latError = xValue.toDouble();
          double lngError = yValue.toDouble();

          // Subtracting error from boat GPS
          correctedLat = lat - latError;
          correctedLng = lng - lngError;

          // Print the GPS error recieved from the Base station
          if(latError >= 0.01) {
            Serial.print("Base station calibrating, please wait...");
            calibrationLoading ++;
            Serial.print("[");
            Serial.print(calibrationLoading);
            Serial.println("%]");
          } else {
            Serial.print("CorrectedLat: ");
            Serial.print(correctedLat, 10);
            Serial.print(", CorrectedLng: ");
            Serial.println(correctedLng, 10);
            Serial.println();
          }

          /*
          Serial.print("LatLocal: ");
          Serial.print(lat, 10);
          Serial.print(", LngLocal: ");
          Serial.println(lng, 10);
          /*
          Serial.print("LatError: ");
          Serial.print(latError, 10);
          Serial.print(", LngError: ");
          Serial.println(lngError, 10);

          Serial.print("CorrectedLat: ");
          Serial.print(correctedLat, 10);
          Serial.print(", CorrectedLng: ");
          Serial.println(correctedLng, 10);
          Serial.println();
          */
        }
      } 
    }
  }
}


//  Updates rolling average for a given parameter.
void updateRollingAverage(double* buffer, double newValue, double& average) {
  buffer[count % WINDOW_SIZE] = newValue;
  double sum = 0;
  for (int i = 0; i < WINDOW_SIZE; i++) {
    sum += buffer[i];
  }
  average = sum / WINDOW_SIZE;
  count++;
}