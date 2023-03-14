int led1 =4;
int led2=5;
int led3=6;
int  valor;
int pot = A0;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

   //0-1023
   analogWrite(valor,1);
  valor = map(valor,0,1023,0,4);
    if (valor ==0){
      digitalWrite(led1,0);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
      
    }
    if (valor ==1){
      digitalWrite(led1,1);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
      
    }
    if (valor ==2){
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,0);
      
    }
    if (valor ==3){
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,1);
      
    }


}
