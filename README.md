# Hybrid Engine Control System for Two-Wheelers

This project demonstrates the development of a hybrid propulsion system combining an Internal Combustion (IC) engine and an Electric motor for two-wheelers. The electronic control system is built using an Arduino Uno, integrating sensor data from the IC engine to control current flow through the electric motor.

## 🚀 Project Overview

- **Type**: Hybrid Engine Controller (IC + Electric)
- **Platform**: Arduino Uno
- **Key Features**:
  - Reads real-time data from engine sensors
  - Uses an H-bridge circuit to control motor direction
  - Employs a solid-state relay (SSR) for current switching
  - Activates an electric coil based on input signals

## ⚙️ Components Used

- Arduino Uno
- Engine Sensors (Temperature, RPM, etc.)
- H-Bridge Motor Driver
- Solid State Relay (SSR)
- Electric Coil / DC Motor
- Power Supply (12V/5V as required)
- Connecting Wires, Breadboard

## 🔧 Working Principle

1. Engine sensors send real-time data to the Arduino Uno.
2. Based on programmed thresholds, Arduino decides when to activate the electric motor.
3. An H-bridge circuit is used to control motor direction.
4. A solid-state relay switches the motor current path.
5. The current is passed through the electric coil for propulsion assistance.

## 🧠 Code Overview

The Arduino code includes:
- Analog/Digital sensor readings
- Conditional logic for motor activation
- PWM signal generation for motor control
- Relay switching logic

## 📦 Future Improvements

- Integration with battery management system
- Compact PCB design for production
