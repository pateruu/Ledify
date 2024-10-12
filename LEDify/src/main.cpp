#include <Arduino.h>
//#include <Wifi.h>              //Bring this back when switching to ESP32 board.
#include <ESP8266WiFi.h>
#include <ESPAsyncWebServer.h>
#include <Adafruit_NeoPixel.h>  //led functions

#include "config.h" //stores wifi ssid and password.
#include "wifi_connection.h"  //Handles the initial Wifi connection
#include "web_server.h" //handles web server

#include "led_control.h" //Handles all LED control functions
#include "pin_definitions.h" //Includes all PIN definitions on MCU
#include "constants.h"


void setup() {
  Serial.begin(115200); //Setup serial output to monitor for debugging

  Serial.println("Initializing LEDS...");
  initializeLEDS();
  Serial.println("Init LEDS Completed.");


}

void loop() {

}