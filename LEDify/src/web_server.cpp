#include "web_server.h"
#include "led_control.h"

AsyncWebServer server(80); //Create server instance on port 80

void setupWebServer(){
    for(int i = 0; i < 3; i++){
        setLEDColour(2, 150, 0, 0, 0); //turn on red
        delay(500);
        
        setLEDColour(2, 0, 0, 0, 0); //turn off
        delay(500);
    }
    setLEDColour(2, 0, 150, 0, 0); //turn on green
    delay(500);

    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
       request->send(200, "text/plain", "Hello, this is your ESP8266 server!") ;
    });

    server.begin();
    Serial.println("Web Server started: Port 80");

}