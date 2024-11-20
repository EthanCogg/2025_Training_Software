#include "Pin_Assignments.h"
#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(10);
    pinMode(SW_1, INPUT_PULLDOWN);
    pinMode(SW_2, INPUT_PULLUP);
    pinMode(LED, OUTPUT);

    Serial.println("Initializing RoveComm");
    RoveComm.begin
    // put your setup code here, to run once:
}

void loop() {
    if (digitalRead(SW_1)) {
        if (ledison) {
            ledison = false;
            digitalWrite(LED, LOW);
        } else {
            ledison = true;
            digitalWrite(LED, HIGH);
        }
        delay(1000);
    }
    // put your main code here, to run repeatedly:
}
