#include <Adafruit_NeoPixel.h>
#include "pin_definitions.h"
#include "constants.h"
#include "led_control.h"

//Instance of Adafruit_NeoPixel
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, COLOUR_ORDER + NEO_KHZ800);

//Define Variables
uint8_t currentR;
uint8_t currentG;
uint8_t currentB;
uint8_t currentW;
bool isOn;


//Initialize the LED strip.
void initializeLEDS(){
    strip.begin();

    //turn off all LEDS
    setStripColour(0, 0, 0, 0);
    strip.setBrightness(150);
    delay(1000);

    //LED Verification Check
    for(int i = 0; i < 3; i++){
        setLEDColour(0, 150, 0, 0, 0); 
        delay(500);
        setLEDColour(0, 0, 0, 0, 0);
        delay(500);
    }
    setLEDColour(0, 0, 150, 0, 0);
    delay(500);
}

//Set the whole strip colour
void setStripColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w){
  //Set all LEDs to given colour
  for(int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(r, g, b, w));
  }
  strip.show();

  //Update current colour values.
  currentR = r;
  currentG = g;
  currentB = b;
  currentW = w;
}

//Set an individual LED colour
void setLEDColour(int n, uint8_t r, uint8_t g, uint8_t b, uint8_t w){
    //If given LED is out of bounds
    if( n > NUM_LEDS || n < 0){
        Serial.println("LED index out of bounds.");
        return;
    } else{ //Set the pixel colour.
        strip.setPixelColor(n, strip.Color(r, g, b, w));
        strip.show();
    }
}

//Function to turn off all LEDs
void turnOffLEDS(){
    for(int i=0; i < NUM_LEDS; i++){
        strip.setPixelColor(i, strip.Color(0, 0, 0, 0));
    }   
    strip.show();
}

//Toggle LEDs On/Off
void togglePowerButton(){
    if(isOn){ //if on then turn off and set isOn to false
        Serial.println("Turning off LEDs...");
        turnOffLEDS();
        isOn = false;   
    } else{ //If off then turn on and set isOn to true
        Serial.println("Turning on LEDs...");
        setStripColour(currentR, currentG, currentB, currentW);
        isOn = true;
    }
}