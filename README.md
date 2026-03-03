# 🔐 PIC16F877A Security System

A reliable microcontroller-based security system with password protection using 4x4 keypad and 16x2 LCD display.  
Users must enter the correct password to activate the LED output. Ideal for home, office, or bank security applications.

---

## 📋 Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Hardware Components](#hardware-components)
- [Circuit Diagram](#circuit-diagram)
- [System Images](#system-images)
- [Software](#software)
- [Installation](#installation)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Future Improvements](#future-improvements)
- [License](#license)

---

## 🎯 Overview
Built around **PIC16F877A**, this system uses a 4x4 keypad for password input and a 16x2 LCD for feedback.  
Correct password → LED blinks. Wrong password → system resets.

---

## ✨ Features
- Password protection via 4x4 keypad  
- 16x2 LCD display  
- LED output  
- Low power consumption  
- Easy password customization in code  
- Multiple applications: home, office, bank  

---

## 🔧 Hardware Components

| Component | Quantity | Purpose |
|-----------|----------|---------|
| PIC16F877A | 1 | Main controller |
| 4x4 Keypad | 1 | Password input |
| 16x2 LCD Display | 1 | User interface |
| 33pF Capacitors | 2 | Crystal stabilization |
| Crystal (4-8 MHz) | 1 | Clock source |
| LED | 1 | Output indication |
| 5V Power Supply | 1 | Power |
| Jumper Wires | As needed | Connections |

---

## 🔌 Circuit Diagram
![Circuit Diagram](images/circuit-diagram.jpg)

### Pin Connections

| PIC16F877A Pin | Connected To |
|----------------|--------------|
| PORTB | Keypad (rows/columns) |
| RD2-RD7 | LCD (RS, EN, D4-D7) |
| RC0 | LED |
| OSC1/OSC2 | Crystal + 33pF capacitors |

---

## 💻 Software
- **Compiler:** MikroC Pro for PIC  
- **Language:** C  
- **Libraries:** Keypad, LCD (built-in MikroC)  

---

## 🚀 Installation
### Prerequisites
- MikroC Pro for PIC IDE  
- PIC programmer (PICKit3)  
- 5V power supply  

### Steps
1. Clone repository  
2. Open `Code/Security_System.c` in MikroC  
3. Configure project for **PIC16F877A**  
4. Build project (Ctrl+F9)  
5. Connect PIC programmer  
6. Upload HEX file to PIC16F877A  
7. Power circuit with 5V  

---

## 📱 Usage
1. Power on system  
2. LCD shows: "Enter Password:"  
3. Enter 4-digit password  
4. Correct → LCD "Welcome", LED blinks  
5. Wrong → system resets and prompts password again  

*Default password set in code.*

---

## 📁 Code Structure

| File | Description |
|------|-------------|
| `Code/Security_System.c` | Main program with password verification |

---

## 🔮 Future Improvements
- Add EEPROM for multiple passwords  
- Include buzzer for alarm  
- Add relay to control door lock  
- Implement timeout after wrong attempts  
- Wireless connectivity (GSM/Bluetooth)  
- Store access logs  

---

## 📄 License
This project is for educational purposes only.
