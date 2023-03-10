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
      
      String c = cadena.substring(1,cadena.length()-1);


      char *cad = c.c_str();

      char *garuco=strtok(cad,"R");
      int cont=0;
      while(garuco!= NULL)
      {
        switch(cont){
          case 0:
            vP1= String(garuco.toInt();
          break; 
          case 1:
            vP2= String(garuco.toInt();
          break;
          case 2;  
            vP3= String(garuco.toInt();
          break;

        cont++;
        garuko = strtok(NULL,"R");
      }
      
    }

  }

}
  
  delay(100);
}
// strok
/*charAt y un for
indexOf **se usa con un for
en lugar de readString usar read
Substring

------>keystroks en pyton
------>Pulsadores en confiiguracion pullop con arduino
*/