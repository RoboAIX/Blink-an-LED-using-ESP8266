//Paste the code snippet copied from Blynk Web Dashboard

// Example
// #define BLYNK_TEMPLATE_ID "TMPL32s43QfvL"
// #define BLYNK_TEMPLATE_NAME "Blink LED"
// #define BLYNK_AUTH_TOKEN "-gZIyUkmdvfO_pw5uTh7Iu7_ge-5xSaB"


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Enter your Wi-Fi credentials
char ssid[] = "Wifi Name";
char pass[] = "Password";

#define LED_PIN D2  // Connect LED anode to D2 via resistor

BLYNK_WRITE(V0) {
  int ledState = param.asInt();
  digitalWrite(LED_PIN, ledState);
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
