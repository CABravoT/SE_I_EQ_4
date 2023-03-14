const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};   // pines de los 8 LEDs
const int buttonPin = 10;                         // pin del botón o interruptor
int pattern = 1;                                  // patrón seleccionado (1, 2 o 3)

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {                      // si se presiona el botón o interruptor
    pattern = (pattern % 3) + 1;                 // cambiar al siguiente patrón
    delay(200);                                  // retardo para evitar rebotes
  }

  switch (pattern) {
    case 1:
      pattern1();
      break;
    case 2:
      pattern2();
      break;
    case 3:
      pattern3();
      break;
  }
}

void pattern1() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
}

void pattern2() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[(i + 4) % 8], LOW);
  }
}

void pattern3() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[(i + 2) % 8], LOW);
  }
}