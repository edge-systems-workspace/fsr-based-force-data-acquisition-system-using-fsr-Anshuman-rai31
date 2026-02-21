#include <Arduino.h>
int fsrPin=A0;

void setup() {
    Serial.begin(9600);

}

void loop() {
    int fsrValue = analogRead(fsrPin);
    Serial.print(fsrValue);
    delay(300);
}