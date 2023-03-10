int potenciometro= A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valor= analoRead(potenciometro);

Seria.prinln(valor);
delay(1000);
}
