#include <WiFi.h>

#define BLYNK_TEMPLATE_ID "TMPL34akZy7OO"
#define BLYNK_TEMPLATE_NAME "Website LED"
#define BLYNK_AUTH_TOKEN "4NwQMlyLVnPekrnnzfp4olZ9zobz_uOP"  

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

const char* ssid = "GalaxyA";
const char* pass = "xyeb0000";

const int ledPin = 2;

BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(ledPin, value);
  Serial.println(value ? "LED ON" : "LED OFF");
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
