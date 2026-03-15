# STM32 Vehicle Environment Monitoring System

An embedded monitoring prototype designed to observe environmental conditions inside a vehicle.  
The system measures temperature, humidity, and gas concentration using external sensors and reports real-time data through UART.

## System Overview

This project demonstrates basic sensor interfacing and environmental monitoring using an STM32 microcontroller.  
The system periodically collects data from multiple sensors and outputs formatted readings via serial communication.

## Hardware Components

- STM32F103RB microcontroller
- DHT11 temperature and humidity sensor
- MQ-series gas sensor (analog output)
- USB-UART interface for real-time monitoring

## System Architecture

Sensors → STM32 → UART → Serial Monitor

1. DHT11 provides temperature and humidity data through a digital single-wire protocol.
2. MQ gas sensor outputs an analog voltage proportional to gas concentration.
3. STM32 reads:
   - DHT11 via GPIO timing protocol
   - MQ sensor via ADC
4. Sensor data is processed and transmitted via UART.

## Features

- Temperature and humidity monitoring
- Gas level sensing using ADC
- Periodic sensor sampling
- Real-time UART monitoring
- Modular sensor driver implementation

## Development Environment

- STM32CubeIDE
- STM32 HAL Library
- C programming language

## Possible Improvements

- Add LCD display for local monitoring
- Implement gas threshold alert system
- Apply filtering for sensor noise
- Add wireless monitoring (ESP8266 / Bluetooth)
