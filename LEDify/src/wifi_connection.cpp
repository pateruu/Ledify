#include <Arduino.h>
#include <WiFiManager.h>
#include "config.h"

#include <Adafruit_NeoPixel.h>
#include <led_control.h>


#if defined(ESP8266)
#include <ESP8266WiFi.h>
#elif defined(ESP32)
#include <WiFi.h>
#endif

// Create an instance of WiFiManager
WiFiManager wifiManager; 

//Connect to WIFI
void connectToWifi(){

    if(WiFi.begin(ssid, password) == WL_CONNECTED){
        Serial.println("Connected to Wi-Fi using saved credentials.");
    } else{
        Serial.println("Failed to connect using saved credentials.");
        
        if(!wifiManager.autoConnect("LEDify-AP")){
            Serial.println("Failed to connect... retrying....");
            delay(3000);
            ESP.restart();
        }   
    }

    Serial.println("Connected to Wi-Fi");
    Serial.println("IP Address: ");
    Serial.println(WiFi.localIP()); // Print the local IP address
}
