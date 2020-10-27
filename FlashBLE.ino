#include "FlashBLE.h"

FlashBLE Flash;

void setup() {
    Serial.begin(9600);
    while (!Serial);
}

void loop() {

    Flash.put("sensor","512");
    Serial.println("Value saved to flash");
    Serial.print(Flash.get("sensor"));
    Serial.println(" - Value read from flash");
    Flash.clear();
    Serial.println("Flash storage erased");
    Serial.print(Flash.get("sensor"));
    Serial.println("Error reading from flash, because flash storage is empty");
    Flash.put("sensor","512");
    Serial.println("Another value saved to flash");
    Serial.print(Flash.get("sensor"));
    Serial.println(" - Value read from flash");
    Serial.println("Finished!");
    while(1);
}
