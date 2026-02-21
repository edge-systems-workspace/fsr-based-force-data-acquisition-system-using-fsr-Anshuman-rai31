/**
 * @file main.cpp
 * @brief Simple FSR (Force Sensing Resistor) data acquisition example for Arduino.
 *
 * This sketch reads an analog value from an FSR connected to A0 and
 * prints the raw ADC value to the serial console every 300 ms.
 *
 * @author Anshuman Rai
 * @date 2026-02-21
 * @details
 * - Hardware: FSR connected to analog pin A0 (with appropriate pull-down/up resistor circuit)
 * - Behavior: Reads analog value via analogRead and writes it to Serial at 9600 baud.
 */

#include <Arduino.h>
int fsrPin=A0;

/**
 * @brief Arduino setup function.
 *
 * Initializes serial communication at 9600 baud.
 */
void setup() {
    Serial.begin(9600);

}

/**
 * @brief Arduino main loop.
 *
 * Reads the analog value from the FSR pin and prints it to the serial
 * monitor. The read/print loop runs every 300 milliseconds.
 */
void loop() {
    int fsrValue = analogRead(fsrPin);
    Serial.print(fsrValue);
    delay(300);
}