int led = 6;

int potSel= A0;
int potInt= A1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//pinMode(led, OUTPUT);
}
int sel=0;
int valintepot=0;
int valintserial=0;
//int valSerial;
 
 //int valPot;
 //int selOption;

void loop() {
  // put your main code here, to run repeatedly:

  sel= analogRead(potSel);
  valintepot= analogRead(potInt);
  Serial.println(String(sel)+ " " + String(valintepot));
//  valPot = analogRead(potInt);
  //selOption =analogRead(potSel);
  
  if(Serial.available()>0){
    valintserial= Serial.readString().toInt();
    //valintepot= Serial.readString().toInt();    
    

    }
    if  (sel > 511){
    analogWrite(led,valintserial);
    }
    else{
    valintepot= map(valintepot,0,1023,0,255);
    analogWrite(led,valintepot);
    }
delay(100);

  //valPot= map(valPot, 0, 1023,0,255);

  //selOption= map(selOption, 0, 1023,0,1);

  //if (selOption==1){
   // analogWrite(led, valSerial) ; 
//  }

  //else{
   // analogWrite  (led, valPot);
  //}

//delay(1000);

}

