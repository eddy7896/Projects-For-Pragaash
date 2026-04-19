#include "DHT.h"

#define DHTPIN 2     // DHT11 Data pin
#define DHTTYPE DHT11
#define RELAY_PIN 8  // Pin connected to Relay modules

DHT dht(DHTPIN, DHTTYPE);

// Temperature Thresholds in Celsius
const float FREEZING_THRESHOLD = 3.0; 
const float SAFE_THRESHOLD = 5.0;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Start with heaters OFF
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Current Temp: ");
  Serial.print(temp);
  Serial.println("°C");

  if (temp <= FREEZING_THRESHOLD) {
    digitalWrite(RELAY_PIN, HIGH); // Turn ON Peltier
    Serial.println("Status: HEATING ACTIVE");
  } 
  else if (temp >= SAFE_THRESHOLD) {
    digitalWrite(RELAY_PIN, LOW);  // Turn OFF Peltier
    Serial.println("Status: SYSTEM STANDBY");
  }

  delay(2000); // Wait 2 seconds before next reading
}