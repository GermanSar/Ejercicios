/*4. Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	resultado = a + (b/(c-d));
	
	cout.precision(2);
	
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}

*/

#include <Arduino.h>

float a,b,c,d,resultado = 0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite el valor de a: "); while(Serial.available()){} a = Serial.parseInt();	
	Serial.println("Digite el valor de b: "); while(Serial.available()){} b = Serial.parseInt();	
	Serial.println("Digite el valor de c: "); while(Serial.available()){} c = Serial.parseInt();	
	Serial.println("Digite el valor de d: "); while(Serial.available()){} d = Serial.parseInt();

  	resultado = a + (b/(c-d));
	  
	Serial.println("resultado: " + String(resultado, '\2')); //Decimales
	Serial.println("resultado: " + String(resultado));
 
	
}