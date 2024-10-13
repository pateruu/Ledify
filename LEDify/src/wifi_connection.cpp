#include <WiFiManager.h>
#include "config.h"
#include "led_control.h"

#if defined(ESP8266)
#include <ESP8266WiFi.h>
#elif defined(ESP32)
#include <WiFi.h>
#endif

// Create an instance of WiFiManager
WiFiManager wifiManager; 

//Connect to WIFI
void connectToWifi(){
    if(!wifiManager.autoConnect("LEDify-AP")){
        Serial.println("Failed to connect... retrying....");
        ESP.restart();
    } else{
        Serial.println("IP Address: ");
        Serial.println(WiFi.localIP()); //Print the local IP address
    }

    for(int i = 0; i < 3; i++){
        setLEDColour(1, 150, 0, 0, 0); //turn on red
        delay(500);
        setLEDColour(1, 0, 0, 0, 0); //turn off
        delay(500);
    }
    setLEDColour(1, 0, 150, 0, 0); //Turn on green for success
}
