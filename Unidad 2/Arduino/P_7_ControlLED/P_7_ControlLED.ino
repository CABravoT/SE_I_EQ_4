int led= 13;

void setup() {
  // put your setup code here, to run once:
Serial.Begin(9600)
Serial.setTimeout(100);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.avaiable()>0){
    int v= Serial.readString().toInt();
    digitalWrite(led, v);  //1 0
  }
  delay(10);
}