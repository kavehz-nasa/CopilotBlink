#include <Arduino.h>

extern "C" {
    #include "blink.h"
}


#define LED_PIN 13
uint8_t LED_GPIO = LED_PIN;

void setup() 
{
    pinMode(LED_PIN, OUTPUT);
}


void turnOn(bool turnOn_arg0)
{
    digitalWrite(LED_PIN, turnOn_arg0);
}

void turnOff(bool turnOff_arg0)
{
    digitalWrite(LED_PIN, turnOff_arg0);
}


void loop() 
{
    forFun();
    delay(500);
}