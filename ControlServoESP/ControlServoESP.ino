#include <ESP32Servo.h>

extern "C" {
    #include "controlServo.h"
}

Servo myServo;

const int SERVO_PIN = 13;

void setup()
{
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);
    myServo.setPeriodHertz(50);
    myServo.attach(SERVO_PIN, 500, 2400);
}

void rotateLeft(bool rotateLeft_arg0)
{
    int pos = 30;
    myServo.write(pos);
}

void rotateRight(bool rotateRight_arg0)
{
    
    myServo.write(pos);
}

void loop()
{
    myStep();
    delay(100);
}