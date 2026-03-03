# 🔐 PIC16F877A Security System with Password
**A reliable microcontroller-based security system with password protection using 4x4 keypad and 16x2 LCD display.**  
Users must enter the correct password to activate the output (LED). Ideal for home, office, or bank security applications.

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
This security system is built around the **PIC16F877A** microcontroller.  
It uses a 4x4 keypad for password input and a 16x2 LCD for user feedback.  
When the correct password is entered, an LED blinks to indicate successful access.

---

## ✨ Features
- **Password protection** via 4x4 keypad  
- **16x2 LCD display** for user interaction  
- **LED output** indication  
- **Low power consumption**  
- **Easy to customize** password in code  
- **Multiple applications**: home, office, bank  

---

## 🔧 Hardware Components

| Component | Quantity | Purpose |
|-----------|----------|---------|
| PIC16F877A Microcontroller | 1 | Main controller |
| 4x4 Keypad | 1 | Password input |
| 16x2 LCD Display | 1 | User interface |
| 33pF Capacitors | 2 | Crystal stabilization |
| Crystal (4-8 MHz) | 1 | Clock source |
| LED | 1 | Output indication |
| 5V Power Supply | 1 | Power |
| Jumper Wires | As needed | Connections |

---

## 🔌 Circuit Diagram
![Circuit-Diagram](https://raw.githubusercontent.com/AishaEngineer/Security-System-PIC/main/Images/Circuit-Diagram.jpg)
*Pin connections and overall schematic for PIC16F877A Security System.*

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
- PIC programmer (e.g., PICKit3)  
- 5V power supply

### Steps
1. Clone this repository  
2. Open `Code/Security_System.c` in MikroC  
3. Configure project for **PIC16F877A**  
4. Build the project (Ctrl+F9)  
5. Connect your PIC programmer  
6. Upload the HEX file to PIC16F877A  
7. Power the circuit with 5V  

---

## 📱 Usage
1. Power on the system  
2. LCD displays: "Enter Password:"  
3. Enter 4-digit password using keypad  
4. If correct: LCD shows "Welcome" and LED blinks  
5. If wrong: System resets and prompts password again  

*Note: Default password is set in code.*

---

## 📁 Code Structure

| File | Description |
|------|-------------|
| `Code/Security_System.c` | Main program with password verification |

### Main Functions
- `get_password()` - Handles password input  
- `main()` - Initializes hardware and main loop  

---

## 🔮 Future Improvements
- Add EEPROM to store multiple passwords  
- Include buzzer for alarm  
- Add relay to control door lock  
- Implement time-out after wrong attempts  
- Add wireless connectivity (GSM/Bluetooth)  
- Store access logs  

---

## 📄 License
This project is for educational purposes only.

---

## About
PIC16F877A-based security system with password protection using 4x4 keypad and 16x2 LCD display.  
Users must enter the correct password to activate output (LED). Ideal for home, office, or bank security applications.  
Programmed in MikroC.
