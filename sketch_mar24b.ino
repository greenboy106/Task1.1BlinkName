int LED_PIN = 13; // Built-in LED on Nano 33 IoT

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

// Custom function to blink a dot
void blinkDot() {
  digitalWrite(LED_PIN, HIGH);
  delay(200); // short blink
  digitalWrite(LED_PIN, LOW);
  delay(200); // short pause
}

// Custom function to blink a dash
void blinkDash() {
  digitalWrite(LED_PIN, HIGH);
  delay(600); // long blink
  digitalWrite(LED_PIN, LOW);
  delay(200); // short pause
}

void loop() {
  // Example: "MINH" (replace with your own Morse code)
  // M: --
  blinkDash(); blinkDash();
  delay(600);

  // I: ..
  blinkDot(); blinkDot();
  delay(600);

  // N: -.
  blinkDash(); blinkDot();
  delay(600);

  // H: ....
  blinkDot(); blinkDot(); blinkDot(); blinkDot();
  delay(2000); // pause before repeating the sequence
}
