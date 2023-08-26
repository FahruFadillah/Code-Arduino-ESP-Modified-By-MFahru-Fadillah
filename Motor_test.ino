//Muhammad Fahru Fadillah
//Programmer

#include <AFMotor.h> //library motor DC

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);


void setup() {
}

void loop() {
  // perintah yang berulang
motor1.setSpeed(100);
motor2.setSpeed(100);
motor1.run(FORWARD);
motor2.run(FORWARD);
delay(9000);
motor1.setSpeed(255);
motor2.setSpeed(255);
motor1.run(BACKWARD);
motor2.run(BACKWARD);
delay(9000);
motor1.setSpeed(255);
motor2.setSpeed(255);
motor1.run(RELEASE);
motor2.run(RELEASE);
delay(1000);
}