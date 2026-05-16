# Bidirectional People Counter (ESP32)

Developed a system to track room occupancy using two IR sensors.

## Features
- Detects entry and exit direction
- Real-time people counting
- Serial monitor output for debugging

## Components
- ESP32
- 2 IR Sensors

## Working
- Sensor1 → Sensor2 trigger = Entry → count++
- Sensor2 → Sensor1 trigger = Exit → count--

## Applications
- Smart rooms
- Energy-efficient lighting systems

## Note
This is a simplified firmware representation of the system logic.
