// Arduino Nano built-in LED pin
int LED_PIN = 13; 

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

// Function for short blink (dot)
void blinkDot() {
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200);
}

// Function for long blink (dash)
void blinkDash() {
  digitalWrite(LED_PIN, HIGH);
  delay(600);
  digitalWrite(LED_PIN, LOW);
  delay(200);
}

void loop() {
  // Morse code for MATTHEW: -- .- - - .... . .--
  
  // M: --
  blinkDash(); blinkDash();
  delay(600);

  // A: .-
  blinkDot(); blinkDash();
  delay(600);

  // T: -
  blinkDash();
  delay(600);

  // T: -
  blinkDash();
  delay(600);

  // H: ....
  blinkDot(); blinkDot(); blinkDot(); blinkDot();
  delay(600);

  // E: .
  blinkDot();
  delay(600);

  // W: .--
  blinkDot(); blinkDash(); blinkDash();
  delay(2000); // Pause before repeating the name
}
