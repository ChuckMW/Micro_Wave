// Output pins
const int pin1 = 3;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 9;

// Pulse timing parameters
const unsigned long pulseWidth = 10; // Pulse width in ms

// Pulse intervals (in ms) for each pin
const unsigned long interval1 = 2000; // 0.5 Hz
const unsigned long interval2 = 1000; // 1 Hz
const unsigned long interval3 = 500;  // 2 Hz
const unsigned long interval4 = 200;  // 5 Hz

// Tracking time and pulse states
unsigned long lastTrigger1 = 0;
unsigned long lastTrigger2 = 0;
unsigned long lastTrigger3 = 0;
unsigned long lastTrigger4 = 0;

bool pin1Active = false;
bool pin2Active = false;
bool pin3Active = false;
bool pin4Active = false;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  unsigned long now = millis();

  // === PIN 1 ===
  if (!pin1Active && now - lastTrigger1 >= interval1) {
    digitalWrite(pin1, HIGH);
    pin1Active = true;
    lastTrigger1 = now;
  }
  if (pin1Active && now - lastTrigger1 >= pulseWidth) {
    digitalWrite(pin1, LOW);
    pin1Active = false;
  }

  // === PIN 2 ===
  if (!pin2Active && now - lastTrigger2 >= interval2) {
    digitalWrite(pin2, HIGH);
    pin2Active = true;
    lastTrigger2 = now;
  }
  if (pin2Active && now - lastTrigger2 >= pulseWidth) {
    digitalWrite(pin2, LOW);
    pin2Active = false;
  }

  // === PIN 3 ===
  if (!pin3Active && now - lastTrigger3 >= interval3) {
    digitalWrite(pin3, HIGH);
    pin3Active = true;
    lastTrigger3 = now;
  }
  if (pin3Active && now - lastTrigger3 >= pulseWidth) {
    digitalWrite(pin3, LOW);
    pin3Active = false;
  }

  // === PIN 4 ===
  if (!pin4Active && now - lastTrigger4 >= interval4) {
    digitalWrite(pin4, HIGH);
    pin4Active = true;
    lastTrigger4 = now;
  }
  if (pin4Active && now - lastTrigger4 >= pulseWidth) {
    digitalWrite(pin4, LOW);
    pin4Active = false;
  }
}
