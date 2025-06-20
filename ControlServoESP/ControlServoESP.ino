#include <ESP32Servo.h>

extern "C" {
    #include "controlServo.h"
}

Servo myServo;

const int SERVO_PIN = 13;
int pos = 0;

void setup()
{
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);
    myServo.setPeriodHertz(50);
    myServo.attach(SERVO_PIN, 500, 2400);
    // Reset to original position
    myServo.write(pos);
    delay(100);
}

void rotateLeft(bool rotateLeft_arg0)
{
    pos += 30;
    myServo.write(pos);
    delay(100);
}

void rotateRight(bool rotateRight_arg0)
{
    pos -= 30;
    myServo.write(pos);
    delay(100);
}

void loop()
{
    myStep();
    delay(1000);
}