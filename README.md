# 🚀 Arduino IDE Setup for NodeMCU (ESP8266)

This guide will help you configure the **Arduino IDE** to program the **NodeMCU ESP8266 (ESP-12E Module)**. Follow these simple steps to install the required packages and libraries.

## 🔧 Step-by-Step Setup

### 1. Add ESP8266 Board URL

- Open Arduino IDE  
- Go to: `File` > `Preferences`  
- In the **"Additional Board Manager URLs"** field, paste the following URL: https://arduino.esp8266.com/stable/package_esp8266com_index.json


> If there are multiple URLs, separate them with commas.


### 2. Install ESP8266 Platform

- Go to: `Tools` > `Board` > `Boards Manager`  
- Search for `esp8266`  
- Click **Install** on the **esp8266 by ESP8266 Community** package


### 3. Select the NodeMCU Board

- Go to: `Tools` > `Board` > `ESP8266 Boards`  
- Select: **NodeMCU 1.0 (ESP-12E Module)**


### 4. Select the COM Port

- Connect your NodeMCU to your PC via USB  
- Go to: `Tools` > `Port`  
- Select the available COM port (e.g., `COM3`, `COM4`, etc.)


### 5. Install Blynk Library

- Go to: `Tools` > `Manage Libraries`  
- Search for `Blynk`  
- Click **Install**  
- When prompted, click **Install All** to install library dependencies
