#include <Adafruit_NeoPixel.h>
#include "pin_definitions.h"
#include "constants.h"
#include "led_control.h"

//Instance of Adafruit_NeoPixel
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, COLOUR_ORDER + NEO_KHZ800);

void initializeLEDS(){
    strip.begin();

    setStripColour(0, 0, 0, 0);
    delay(1000);
    strip.show();

    strip.setBrightness(150);
    strip.setPixelColor(0, strip.Color(0, 150, 0, 0));
    delay(2000);
    strip.show();

    strip.show();
}

void setStripColour(uint8_t r, uint8_t g, uint8_t b, uint8_t w){
  for(int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(r, g, b, w));
  }
  strip.show();
  delay(1000);
}

void setPixelColour(int n, uint8_t r, uint8_t g, uint8_t b, uint8_t w){

    if( n > NUM_LEDS || n < 0){

    }

}


