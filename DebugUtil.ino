#define DEBUG
#include "DebugUtils.h"

long lastMillis;
long interval;


void setup() {
    Serial.begin(9600);
    
    interval = 1000;
    DEBUG_PRINT("interval");
    DEBUG_PRINT(interval);

    lastMillis = millis();
}


void loop() {
    if (millis() - lastMillis > interval) {
        lastMillis = millis();
        DEBUG_PRINT("one second");
    
    }
}
