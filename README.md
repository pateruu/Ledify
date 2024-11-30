# Ledify : Transform Your Space with Smart LED Control

LEDify is an innovative project designed to transform how you interact with smart LED strips. Using an ESP32 or ESP8266 microcontroller, this project lets you control LED colors, brightness, and animations seamlessly through a responsive web interface. 

Bring your lighting ideas to life with intuitive hardware and software integration.

---

## Introduction
LEDify combines microcontroller programming and web-based UI design to deliver an intelligent lighting solution. Whether you're looking to enhance your workspace or create immersive light displays, LEDify offers customizability and user-friendly controls to achieve your vision.

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

The current iteration of LEDify provides:

- **Power Control**  
  - Toggle the LED strip on/off via the web interface.
- **Brightness Adjustment**  
  - Adjust LED brightness with a responsive slider.
- **Color Selection**  
  - Use an interactive color wheel (powered by Iro.js) to pick any color.
- **Preset Colors**  
  - Quickly switch to popular colors like Red, Green, Blue, and White.
- **Animations** *(Planned)*  
  - Control dynamic animations such as waves, pulses, and rainbows.
---
## Next Steps
- **Expand UI with Svelte**  
  - Continue refining the svelte web interface for a polished and responsive experience.
- **Animation Support**  
  - Add animations for more dynamic lighting options.
- **Comprehensive User Guide**  
  - Include step-by-step instructions for hardware assembly and software setup.
- **Mobile Optimization**  
  - Optimize the web interface for better performance on mobile devices.
---
## Getting Started

### Installation:
1. Clone this repository.
2. Upload the code to your ESP32/ESP8266 board.

---

Feel free to add or modify any section as you continue to work on the project.
