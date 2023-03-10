int actuador1= 3; //pot1
int actuador2= 5; //pot2
int actuador3=6;  //pot3

void setup() {
  // put your setup code here, to run once:
Serial.Begin(9600)

}
String cadena;
int vP1,vP2,vP3;
void loop() {
  // put your main code here, to run repeatedly:
  cadena = Serial.readString();
    if(cadena.length()==13){
     if(cadena.charAt(0)=='E'&&cadena.charAt(cadena.length()-1)== 'J'){
      c=c.substring();
      String c = cadena.substring(1,cadena.length()-1)
  }
}
  
  delay(100);
}
