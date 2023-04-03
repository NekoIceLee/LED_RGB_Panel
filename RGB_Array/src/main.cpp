#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel ledPanel(64, 8, NEO_GRB|NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  ledPanel.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
}