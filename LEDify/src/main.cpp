#include <Arduino.h>
#include <Wifi.h>
#include <ESPAsyncWebServer.h>
#include <FastLED.h>
#include "config.h"

//Function Declarations
void setup_wifi();

void setup() {
  
}

void loop() {
  //put your main code here, to run repeatedly:
}

//Functions
void setup_wifi() {
  const char* ssid = "name";
  const char* password = "password";

}




/*
#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <FastLED.h>  // Or <Adafruit_NeoPixel.h> if using NeoPixel

// WiFi credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// Define the LED strip parameters
#define LED_PIN 5         // The GPIO pin for your LED strip
#define NUM_LEDS 30       // Number of LEDs in the strip
CRGB leds[NUM_LEDS];      // FastLED array

// Web server on port 80
AsyncWebServer server(80);

void setup() {
  // Start Serial
  Serial.begin(115200);

  // Initialize LED strip
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Route for the root page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/plain", "Welcome to LEDify!");
  });

  // Route for setting LED colors
  server.on("/set-color", HTTP_GET, [](AsyncWebServerRequest *request){
    String color = request->getParam("color")->value();  // Get color parameter
    // Set LEDs to the requested color
    if (color == "red") {
      fill_solid(leds, NUM_LEDS, CRGB::Red);
    } else if (color == "green") {
      fill_solid(leds, NUM_LEDS, CRGB::Green);
    } else if (color == "blue") {
      fill_solid(leds, NUM_LEDS, CRGB::Blue);
    }
    FastLED.show();
    request->send(200, "text/plain", "Color changed");
  });

  // Start server
  server.begin();
}

void loop() {
  // Nothing to do here, web server handles everything
}
*/