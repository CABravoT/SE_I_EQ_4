//Dada una variable byte, imprime un mensaje cuando
//se llegue al limite de la variable en cada extremo.
//Hacer ciclico el paso entre el intervalo.

byte varNum = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //Incrementa la variable y la mantiene en el rango deseado
  varNum = (varNum + 1)% 256;
  if(varNum == 0){
    Serial.println("0");
  }else if(varNum == 255){
    Serial.println("255");
  }

}