// Pins for HC-SR04
const int trigPin = 2;
const int echoPin = 3;

// Pin for Relay
const int relayPin = 6;

// Variables for distance calculation
long duration;
int distance;

// Threshold: Adjust this (in cm) based on your container position
const int activationDistance = 10; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(relayPin, OUTPUT);

  // Most relays are 'Low Level Triggered', so set HIGH to keep valve CLOSED at start
  digitalWrite(relayPin, HIGH); 
  
  Serial.begin(9600);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor with a 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (Speed of sound is 0.034 cm/us)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Dispensing Logic
  if (distance > 0 && distance <= activationDistance) {
    // Object detected: Open Solenoid
    // (Use LOW if your relay triggers on LOW, use HIGH if it triggers on HIGH)
    digitalWrite(relayPin, LOW); 
    Serial.println("VALVE OPEN: Dispensing...");
  } else {
    // No object: Close Solenoid
    digitalWrite(relayPin, HIGH);
    Serial.println("VALVE CLOSED: Standby");
  }

  delay(200); // Short delay for stability
}