# Ledify
LEDify: Transform Your Space with Smart LED Control

LEDify is a project focused on creating an intuitive control system for smart LED strips using an ESP32/ESP8266 microcontroller. This project allows users to control LED colors, brightness, and animations via a web interface, using a variety of hardware and software technologies.

---
## Table of Contents
- [Hardware Setup](#hardware-setup)
- [Software Setup](#software-setup)
- [Features](#features)
- [Current Progress](#current-progress)
- [Next Steps](#next-steps)
- [Getting Started](#getting-started)
---
## Hardware Setup
This project includes the following setup:
- **ESP32/ESP8266 Board** (Compatible with both)
- **LED Strip** (BTF-LIGHTING RGBW Warm White SK6812)
- **Power Supply** (BTF-LIGHTING AC100-240V to DC5V60A)
---
## Software Setup

## LED Control
Utilized the **Adafruit NeoPixel** library to control the LED strip. Custom functions have been written to handle:
- Power Toggling
- Brightness Control
- Colour changes via a colour picker or preset colour buttons
- Animations for the LED strip (Need to Implement Still)

### Wi-Fi Connection
The project uses a **WiFi Manager** library: **tzapu/WiFiManager**, to simplify the connection process, allowing the board to connect to a Wi-Fi network before starting the web server.

## Web Server
Used the **AsyncWebServer** library, to setup a web server to provide an intuitive user interface for controlling the LEDs. Users can access the web interface over a Wi-Fi connection established by the ESP32/ESP8266 board.

## File System
Used **LittleFS** for file management. This library stores the HTML, CSS, and JS files on the ESP32/ESP8266 board's flash memory so the board can allow the web server to serve the files directly from the board.

---
## Features
The web interface offers users the ability to:
- **Toggle Power**: Turn the LED strip on or off.
- **Adjust Brightness**: Control the brightness of the LEDs with a slider.
- **Color Picker**: Choose any color using a color wheel (powered by Iro.js).
- **Preset Color Buttons**: Quickly select preset colors such as Red, Green, Blue, White, etc.
- **Animations**: (Planned) Control various LED animations like wave, pulse, and rainbow.
---
## Next Steps
- **Complete Svelte UI**: Continue to refine the UI using Svelte for an even more dynamic and responsive user interface.
- **Add Guide**: to help users set up and configure the system.
- **Add More Animations**: Implement a variety of animation controls for the LED strip.
