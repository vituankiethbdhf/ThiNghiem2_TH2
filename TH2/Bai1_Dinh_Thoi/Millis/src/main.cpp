#include <Arduino.h>

#define LED_PIN 2

unsigned long previousMillis = 0;
const long interval = 1000;

int ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }

  // Cong viec khac van duoc thuc hien
  Serial.println("ESP32 dang hoat dong");
}
