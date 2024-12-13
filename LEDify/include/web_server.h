#ifndef WEB_SERVER_H
#define WEB_SERVER_H

#include <LittleFS.h>       //littleFS for file system manager.
#include <ESPAsyncWebServer.h>

void setupWebServer();
extern AsyncWebServer server; //Declare the server globally, so it can be used across multiple files.

#endif