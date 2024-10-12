#ifndef LED_CONTROL_H
#define LED_CONTROL_H
#include <Adafruit_NeoPixel.h>


void initializeLEDS();
void setStripColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w);
void setLEDColour(int n, uint8_t r, uint8_t g, uint8_t b, uint8_t w);

#endif