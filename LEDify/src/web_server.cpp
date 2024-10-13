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