/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estándar.

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	
	return 0;
}

*/

#include <Arduino.h>

int edad;
char sexo=10;
float altura;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite su edad: "); while(Serial.available()){} edad = Serial.parseInt();	
    Serial.println("Digite su sexo: "); while(Serial.available()){} sexo = Serial.parseInt();	
	Serial.println("Digite su altura en metros: "); while(Serial.available()){} altura = Serial.parseInt();	

  	Serial.println("Edad: " + String(edad));
	Serial.println("Edad: " + String(sexo));
	Serial.println("Edad: " + String(altura));  
	
}
