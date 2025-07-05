ESP32 LED Control using Blynk and Web Interface

This project demonstrates how to control the LED from an ESP32 using:
- 📱 [Blynk IoT Platform](https://blynk.io)
- 🌐 A custom HTML webpage with ON/OFF buttons

## 🔧 Features
- LED ON/OFF control via *Blynk cloud*
- LED status display on webpage
- Controlled via *browser or Blynk dashboard*

---

## 📁 Files Included

| File Name               | Description                          |
|-------------------------|--------------------------------------|
| LED_WEB_BLYNK_html_copy.ino | Arduino sketch for ESP32         |
| blynk_switch.html         | HTML file for custom web control   |

---

## 🚀 How to Use

### 1. Flash ESP32
- Open .ino file in *Arduino IDE*
- Add your WiFi credentials & Blynk Auth Token
- Upload to your ESP32

### 2. Setup Blynk
- Create a device in Blynk
- Add *Virtual Pin V0* to control LED
- Copy the *Auth Token* into .ino file

### 3. Run Web Control
- Open blynk_switch.html in any browser
- Use the ON/OFF buttons to control the LED remotely


## 🧠 Project By
Akash Sasikumar  
For educational and IoT demonstration purposes.
