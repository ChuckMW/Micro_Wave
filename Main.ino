// Output pins for pulse generation
const int pin1 = 3; // Channel 1
const int pin2 = 5; // Channel 2
const int pin3 = 6; // Channel 3
const int pin4 = 9; // Channel 4

// Pulse timing parameters
const unsigned long pulseWidth = 10; // Pulse width in milliseconds

// Pulse intervals (in milliseconds) for each pin
const unsigned long interval1 = 2000; // Interval for Pin 1 (0.5 Hz)
const unsigned long interval2 = 1000; // Interval for Pin 2 (1 Hz)
const unsigned long interval3 = 500;  // Interval for Pin 3 (2 Hz)
const unsigned long interval4 = 200;  // Interval for Pin 4 (5 Hz)

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
  // Initialize output pins
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  unsigned long now = millis(); // Get the current time in milliseconds

  // === Pin 1 (Channel 1) ===
  if (!pin1Active && now - lastTrigger1 >= interval1) {
    // Trigger pulse on Pin 1
    digitalWrite(pin1, HIGH);  // Set pin HIGH to trigger pulse
    pin1Active = true;         // Mark pulse as active
    lastTrigger1 = now;        // Store the current time as the last pulse time
  }
  if (pin1Active && now - lastTrigger1 >= pulseWidth) {
    // End pulse on Pin 1 after pulse width duration
    digitalWrite(pin1, LOW);   // Set pin LOW to end the pulse
    pin1Active = false;        // Mark pulse as inactive
  }

  // === Pin 2 (Channel 2) ===
  if (!pin2Active && now - lastTrigger2 >= interval2) {
    // Trigger pulse on Pin 2
    digitalWrite(pin2, HIGH);  // Set pin HIGH to trigger pulse
    pin2Active = true;         // Mark pulse as active
    lastTrigger2 = now;        // Store the current time as the last pulse time
  }
  if (pin2Active && now - lastTrigger2 >= pulseWidth) {
    // End pulse on Pin 2 after pulse width duration
    digitalWrite(pin2, LOW);   // Set pin LOW to end the pulse
    pin2Active = false;        // Mark pulse as inactive
  }

  // === Pin 3 (Channel 3) ===
  if (!pin3Active && now - lastTrigger3 >= interval3) {
    // Trigger pulse on Pin 3
    digitalWrite(pin3, HIGH);  // Set pin HIGH to trigger pulse
    pin3Active = true;         // Mark pulse as active
    lastTrigger3 = now;        // Store the current time as the last pulse time
  }
  if (pin3Active && now - lastTrigger3 >= pulseWidth) {
    // End pulse on Pin 3 after pulse width duration
    digitalWrite(pin3, LOW);   // Set pin LOW to end the pulse
    pin3Active = false;        // Mark pulse as inactive
  }

  // === Pin 4 (Channel 4) ===
  if (!pin4Active && now - lastTrigger4 >= interval4) {
    // Trigger pulse on Pin 4
    digitalWrite(pin4, HIGH);  // Set pin HIGH to trigger pulse
    pin4Active = true;         // Mark pulse as active
    lastTrigger4 = now;        // Store the current time as the last pulse time
  }
  if (pin4Active && now - lastTrigger4 >= pulseWidth) {
    // End pulse on Pin 4 after pulse width duration
    digitalWrite(pin4, LOW);   // Set pin LOW to end the pulse
    pin4Active = false;        // Mark pulse as inactive
  }
}
