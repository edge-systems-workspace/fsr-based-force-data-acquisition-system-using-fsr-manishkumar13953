#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Manish_Kumar
 * @date 2026-02-09
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int value=0;

void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

void loop() {

    value=analogRead(A0);
    Serial.println(value);
    delay(500);
}
