#include <Arduino.h>
#include <ESPAsyncWebServer.h>


#include "config.h" //stores wifi ssid and password.
#include "wifi_connection.h"  //Handles the initial Wifi connection
#include "web_server.h" //handles the web server


#include "led_control.h" //Handles all LED control functions
#include "pin_definitions.h" //Includes all PIN definitions on MCU
#include "constants.h"


void setup() {
  delay(2000);
  
  Serial.begin(115200); //Setup serial output to monitor for debugging

  Serial.println("Initializing LEDS...");
  initializeLEDS();
  Serial.println("Init LEDS Completed.");

  Serial.println("Trying to connect to WiFi...");
  connectToWifi();
  Serial.println("Connected to WiFi");

  setupWebServer();

}

void loop() {
  delay(1000);
}