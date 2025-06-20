
#include <Servo.h>

const int SERVO = 9;

Servo myServo;
int val = 0;

void setup()
{
    myServo.attach(SERVO);
}

void loop()
{
    val = map(val, 0, 1023, 0, 179);

    // Turning counter-clockwise from 0 to 180 degrees

    for (val; val < 180; val++) {
        myServo.write(val);
        delay(10);
    }

    val--;

    // Turning clockwise from 180 to 0 degrees

    for (val; val >= 0; val--) {
        myServo.write(val);
        delay(10);
    }

}