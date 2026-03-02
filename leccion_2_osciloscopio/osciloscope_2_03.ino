const int outputPin = 9; // Signal sent to Oscilloscope
const int readPin = A0;  // Signal sent to PC (Serial Plotter)

void setup() {
  Serial.begin(2000000);   // High speed for smoother waves
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // 1. Create a "Fading" effect (Sawtooth/Triangle wave)
  for (int i = 0; i <= 255; i++) {
    analogWrite(outputPin, i);      // Output to Oscilloscope
    int val = analogRead(readPin);  // Read back for PC
    Serial.println(val);            // Send to Serial Plotter
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(outputPin, i);
    int val = analogRead(readPin);
    Serial.println(val);
  }
}