#include <Servo.h>
const int irSensorPin = 2;
const int relayPin = 3;
const int servoPin = 9;
Servo servoMotor;
void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  servoMotor.attach(servoPin);
  servoMotor.write(0);
}
void loop() {
  int irSensorState = digitalRead(irSensorPin);
  if (irSensorState == HIGH) {
    digitalWrite(relayPin, HIGH);
    servoMotor.write(180);
    delay(1000);
  } else {
    digitalWrite(relayPin, LOW);
    servoMotor.write(0);
    delay(1000);
  }
}