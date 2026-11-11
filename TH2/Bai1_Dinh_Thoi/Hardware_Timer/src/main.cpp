#include <Arduino.h>

#define LED_PIN 2

hw_timer_t *timer = NULL;

volatile bool ledState = false;
volatile bool timerFlag = false;

void ARDUINO_ISR_ATTR onTimer() {
  timerFlag = true;
}

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  // Tao Hardware Timer
  timer = timerBegin(1000000);

  // Goi ham ngat moi 1 giay
  timerAttachInterrupt(timer, &onTimer);

  timerAlarm(timer, 1000000, true, 0);

  Serial.println("Hardware Timer started");
}

void loop() {
  if (timerFlag) {
    timerFlag = false;

    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);

    Serial.println("Timer interrupt!");
  }
}
