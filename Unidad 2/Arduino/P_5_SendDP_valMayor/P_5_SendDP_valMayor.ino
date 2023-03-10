int potenciometro= A0;
void setup() {
  // put your setup code here, to run once:
Seria.begin(9600);
}
int i,valor, valorMayor= -1;
void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<totMuestras;i++){
valor= analogRead(potenciometro);

 if(valor>valorMayor){
valorMayor=valor;
 }
}
//valor /=10;

Seria.prinln(valor);
delay(1000);
}

//Tarea
/*Poblcion
muetra
preprosesamiento
teorema del limite central
modulo pyserial
tratamiento de ruido en sensores
tecnicas de filtrado para sensores


Programas

1.Preprosesamiento: moda
2.Preprosesamiento: mediana

Practica
en excel:
 no.  car1 car2 car3 car4
      
*/
