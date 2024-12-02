/*///////////////////////////////////////////////////////////////////////////////////////////////
This is one half of a script for the 2024 7th semester project "Adaptive and Self-tuning Control
Strategies for Dynamic Positioning of Marine Crafts". This script is for the Arduino Mega at the
base station on solid ground. It records over a 100 second window, creating a thorougly averaged
GPS coordinate with minimal noise interference. It then calculates the error for each new GPS 
coordinate. The error indicates disturbances in the GPS signal, which is relatively similar enough
for the two locations, that it can be used for noise compensation. The error is sent over radio.

Input: GPS over 100s (rolling averaged), New GPS at 1Hz   Output: GPS error measurements at 1Hz

*////////////////////////////////////////////////////////////////////////////////////////////////


#include <TinyGPS++.h>
#include <SoftwareSerial.h>

#define GPS_RX 10
#define GPS_TX 11
#define WINDOW_SIZE 100

TinyGPSPlus gps;
SoftwareSerial gpsSerial(GPS_RX, GPS_TX);

double rollingLat[WINDOW_SIZE] = {0};
double rollingLng[WINDOW_SIZE] = {0};
double rollingAlt[WINDOW_SIZE] = {0};
double avgLat = 0, avgLng = 0, avgAlt = 0;
double cptDiffLat = 0; // Computed Difference Lattitude
double cptDiffLng = 0; // & Longditude
int count = 0;

void setup() {
  Serial.begin(9600);  // For PC communication
  gpsSerial.begin(9600);  // GPS module communication
  Serial1.begin(9600); // For Radio Communication
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

      // Computing the difference, then sending it over Serial1 - which is radio.
      cptDiffLat = lat - avgLat;
      cptDiffLng = lng - avgLng;

      Serial1.print(cptDiffLat, 10);
      Serial1.print(",");
      Serial1.println(cptDiffLng, 10);
    }
  }
}

void updateRollingAverage(double* buffer, double newValue, double& average) {
  buffer[count % WINDOW_SIZE] = newValue;
  double sum = 0;
  for (int i = 0; i < WINDOW_SIZE; i++) {
    sum += buffer[i];
  }
  average = sum / WINDOW_SIZE;
  count++;
}