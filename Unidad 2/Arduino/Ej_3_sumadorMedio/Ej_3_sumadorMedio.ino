int leds=2, ledCout=3 ; 
int botonA=4, botonB=5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(leds, OUTPUT);pinMode(ledCout, OUTPUT);
pinMode(botonA, INPUT);pinMode(botonB, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int estA= digitalRead(botonA);  
  int estB= digitalRead(botonB);  
  
if(estB== HIGH || estA== HIGH){
digitalWrite(leds,HIGH);
delay(200);
digitalWrite(leds,LOW);
} 
if(estA == HIGH && estB== HIGH){
    digitalWrite(ledCout,HIGH);
    delay(500);
digitalWrite(ledCout,LOW);
}    
}