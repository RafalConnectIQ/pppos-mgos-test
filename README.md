# PPPoS Example using Mongoose OS App

## Overview
This app shows how to connect to the internet via a GSM modem using the PPP protocol.


## Prereq
GPIO pins that are used for UART interface for ESP32:


  - **UART 0**
    - RX GPIO: 3
    - TX GPIO: 1

  - **UART 1**
    - RX GPIO: 25
    - TX GPIO: 26

  - **UART 2**
    - RX GPIO: 16
    - TX GPIO: 17

The hardware that we are using:

  - ESP32 Dev Board
  - SIM868 Module Board

## Hardware Connections
  
  - UART 1 is used
  - Common GND for ESP32 and SIM868 module
  - GPIO15 of ESP32 is connected to GPIO7 (RPi Board) pin on SIM868 module. Pulling it low for 4 seconds and then pulling it high turns the module on.
  - Dedicated power supply to SIM868 is required otherwise it would keep restarting.

## Details
PPP library automatically connects to the GPRS network and obtains an IP address.

## Resources

  - https://simcom.ee/modules/gsm-gprs-gnss/sim868/