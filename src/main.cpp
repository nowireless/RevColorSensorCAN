#include <Arduino.h>
#include <CAN.h>

void setup() {
    // write your initialization code here
    Serial.begin(9600);
}

void loop() {
    // write your code here
    Serial.println("Hello");
    delay(1000);
}