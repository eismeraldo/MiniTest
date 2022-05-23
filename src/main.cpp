#include <Arduino.h>

#include <CalcService.hpp>

void setup() {
    Serial.begin(115200);
    /**/
    Serial.printf("add 5 + 10 = %i\n", CalcService::instance().add(5, 10));
    Serial.printf("subtract 10 - 3 = %i\n", CalcService::instance().subtract(10, 3));
}

void loop() {
    // put your main code here, to run repeatedly:
}