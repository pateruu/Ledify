#ifndef LED_CONTROL_H
#define LED_CONTROL_H
#include <Adafruit_NeoPixel.h>

//Global color state variables
extern uint8_t currentR;
extern uint8_t currentG;
extern uint8_t currentB;
extern uint8_t currentW;
extern bool isOn;
extern uint8_t currentBrightness;

//Functions
void initializeLEDS();
void setStripColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w);
void setLEDColour(int n, uint8_t r, uint8_t g, uint8_t b, uint8_t w);
void turnOffLEDS();
void togglePowerButton();
void setBrightnessLevel(int brightness);

#endif