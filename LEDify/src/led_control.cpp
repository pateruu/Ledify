#include <Adafruit_NeoPixel.h>
#include "pin_definitions.h"
#include "constants.h"
#include "led_control.h"

//Instance of Adafruit_NeoPixel
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, COLOUR_ORDER + NEO_KHZ800);

//Initialize the LED strip.
void initializeLEDS(){
    strip.begin();

    setStripColour(0, 0, 0, 0); //turn off all LEDS
    strip.setBrightness(150);
    delay(1000);

    for(int i = 0; i < 3; i++){
        setLEDColour(0, 150, 0, 0, 0); //turn on red
        delay(500);
        
        setLEDColour(0, 0, 0, 0, 0); //turn off
        delay(500);
    }

    setLEDColour(0, 0, 150, 0, 0); //turn on green
    strip.show();
}

//Set the whole strip colour
void setStripColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w){
  for(int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(r, g, b, w));
  }
  strip.show();
}

//Set an individual LED colour
void setLEDColour(int n, uint8_t r, uint8_t g, uint8_t b, uint8_t w){

    if( n > NUM_LEDS || n < 0){
         
    } else{
        strip.setPixelColor(n, strip.Color(r, g, b, w));
        strip.show();
    }
}


