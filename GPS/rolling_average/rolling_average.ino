#include <TinyGPS++.h>
#include <SoftwareSerial.h>

#define GPS_RX 10 // Yellow
#define GPS_TX 11 // Orange
#define WINDOW_SIZE 100

TinyGPSPlus gps;
SoftwareSerial gpsSerial(GPS_RX, GPS_TX);

double rollingLat[WINDOW_SIZE] = {0};
double rollingLng[WINDOW_SIZE] = {0};
double rollingAlt[WINDOW_SIZE] = {0};
double avgLat = 0, avgLng = 0, avgAlt = 0;
int count = 0;

void setup() {
  Serial.begin(9600);  // For PC communication
  gpsSerial.begin(9600);  // GPS module communication
  Serial.println("GPS Data with Rolling Averages and Satellite Count");
  //Serial.println("Lat,Lng,Alt,AvgLat,AvgLng,AvgAlt,Satellites");
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
      Serial.print(lat, 6);
      Serial.print(",");
      Serial.print(lng, 6);
      Serial.print(",");
      Serial.print(alt, 2);
      Serial.print(",");
      Serial.print(avgLat, 6);
      Serial.print(",");
      Serial.print(avgLng, 6);
      Serial.print(",");
      Serial.print(avgAlt, 2);
      Serial.print(",");
      Serial.println(satellites);
    }
  }
}

/**
 * Updates rolling average for a given parameter.
 */
void updateRollingAverage(double* buffer, double newValue, double& average) {
  buffer[count % WINDOW_SIZE] = newValue;
  double sum = 0;
  for (int i = 0; i < WINDOW_SIZE; i++) {
    sum += buffer[i];
  }
  average = sum / WINDOW_SIZE;
  count++;
}
