
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Bat LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  // Tat LED
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
