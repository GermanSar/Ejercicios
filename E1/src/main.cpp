/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/

#include <Arduino.h>

int n1,n2, suma = 0, resta = 0, multiplicacion=0, division=0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	Serial.println("Digite un numero: "); while(!Serial.available()){} n1 = Serial.parseInt();
	Serial.print(String(n1));
        Serial.println("Digite otro numero: "); while(!Serial.available()){} n2 = Serial.parseInt();
	Serial.print(String(n2));

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
  	Serial.println("La suma es: " + String(suma));
	Serial.println("La resta es: " + String(resta));
	Serial.println("La multiplicacion es: " + String(multiplicacion));
	Serial.println("La division es: " + String(division));
}
