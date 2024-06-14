/*
    Project name : PIR Passive Infrared Motion Sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : 
*/
https://projectslearner.com/learn/arduino-mega-pir-passive-infrared-motion-sensor
const int pirSensorPin = 2; // Digital pin connected to the PIR motion sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(pirSensorPin, INPUT); // Set the sensor pin as INPUT
}

void loop() {
  int motionDetected = digitalRead(pirSensorPin); // Read PIR sensor state
  
  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected.");
  }
  
  delay(1000); // Delay to avoid spamming the Serial Monitor
}
