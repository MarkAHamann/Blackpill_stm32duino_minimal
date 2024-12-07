#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    pinMode(PC13, OUTPUT);
}

void loop()
{
    static int loopCount = 0;
    Serial.printf("Blink %d\n", loopCount);
    digitalWrite(PC13, HIGH);
    delay(100);
    digitalWrite(PC13, LOW);
    delay(100);
    ++loopCount;
}
