#include <Arduino.h>

#include "esp_sleep.h"

// Bien luu gia tri qua moi lan Deep Sleep
RTC_DATA_ATTR int bootCount = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  bootCount++;

  Serial.println("====================");
  Serial.println("ESP32 DEEP SLEEP");
  Serial.print("So lan khoi dong: ");
  Serial.println(bootCount);

  // Kiem tra nguyen nhan thuc day
  esp_sleep_wakeup_cause_t wakeup_reason;
  wakeup_reason = esp_sleep_get_wakeup_cause();

  if (wakeup_reason == ESP_SLEEP_WAKEUP_TIMER) {
    Serial.println("ESP32 thuc day bang Timer!");
  } else {
    Serial.println("ESP32 khoi dong lan dau!");
  }

  // Cai dat thoi gian ngu 10 giay
  esp_sleep_enable_timer_wakeup(10ULL * 1000000ULL);

  Serial.println("ESP32 se ngu trong 10 giay...");
  Serial.flush();

  // Bat dau che do Deep Sleep
  esp_deep_sleep_start();
}

void loop() {
  // Khong can viet code tai day
}
