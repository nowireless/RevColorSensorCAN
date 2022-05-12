#include <Arduino.h>
#include <CAN.h>
#include <TCA9548A.h>

TCA9548A i2cMultiplexer(0x70);

void setup() {
    // write your initialization code here
    Serial.begin(9600);

    // Default to channel 0
    i2cMultiplexer.select(0);
}

void loop() {
    // write your code here
    Serial.println("Hello");
    delay(1000);
}