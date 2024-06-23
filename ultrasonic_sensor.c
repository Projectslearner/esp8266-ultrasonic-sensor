/*
    Project name : ESP8266 Ultrasonic Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-ultrasonic-sensor
*/

// Define the pins for the ultrasonic sensor
const int trigPin = D1; // GPIO pin D1 on ESP8266
const int echoPin = D2; // GPIO pin D2 on ESP8266

void setup() {
  Serial.begin(9600); // Initialize serial communication

  pinMode(trigPin, OUTPUT); // Set trigger pin as output
  pinMode(echoPin, INPUT);  // Set echo pin as input
}

void loop() {
  // Trigger pulse to start measurement
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo pulse
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  int distance_cm = duration * 0.034 / 2;

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Add a delay before the next reading
  delay(1000);
}
