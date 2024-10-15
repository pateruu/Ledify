#include "web_server.h"
#include "led_control.h"

AsyncWebServer server(80); //Create server instance on port 80

void setupWebServer(){

    //Initialize the file system
    if(!LittleFS.begin()){
        Serial.println("Failed to setup LittleFS.");
        return;
    }

    //Send HTML, CSS, and JS files from LittleFS manager to the Web Server.
    server.on("/", HTTP_GET, [](AsyncWebServerRequest* request){
        request->send(LittleFS, "/index.html", "text/html");
    });

    server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest* request){
        request->send(LittleFS, "/style.css", "text/css");
    });

    server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest* request){
        request->send(LittleFS, "/script.js", "application/javascript");
    });

    //Handle LED Power Button Toggle
    server.on("/togglePower", HTTP_GET, [] (AsyncWebServerRequest* request){
        Serial.println("Power toggle request received");
        togglePowerButton();
        request->send(200, "application/json", "{\"status\":\"power toggled\"}");
    });

    //Handle the IROJS Colour Wheel
    server.on("/setColor", HTTP_GET, [] (AsyncWebServerRequest* request){
        if (request->hasParam("color")) {
            String color = request->getParam("color")->value();
            Serial.println("Color Received:" + color);
            
            
            uint32_t rgbColor = strtol(color.c_str() + 1, NULL, 16); //Convert hex color to RGB color
            uint8_t r = (rgbColor >> 16) & 0xFF;
            uint8_t g = (rgbColor >> 8) & 0xFF;
            uint8_t b = rgbColor & 0xFF;

            setStripColour(r, g, b, 0); // Set the LED strip color based on the RGB values

            request->send(200, "application/json", "{\"status\":\"color set\"}");
        } else {
            request->send(400, "application/json", "{\"error\":\"No color provided\"}");
        }
    });



    server.begin();
    Serial.println("Web Server started: Port 80");

    delay(2000);
    for(int i = 0; i < 3; i++){
        setLEDColour(2, 150, 0, 0, 0); //turn on red
        delay(500);
        
        setLEDColour(2, 0, 0, 0, 0); //turn off
        delay(500);
    }
    setLEDColour(2, 0, 150, 0, 0); //turn on green
    delay(500);
}