int potenciometro= A0;
void setup() {
  // put your setup code here, to run once:
Seria.begin(9600);
}
int i,valor, valorMenor= 1024;
void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<totMuestras;i++){
valor+= analogRead(potenciometro);
}
valor /=10;

Seria.prinln(valor);
delay(1000);
}
