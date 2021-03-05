/*6. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno

#include<iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3;
	int notaFinalMedia;
	
	cout<<"Ingrese nota1: ";
	cin>>nota1;
	cout<<"Ingrese nota2: ";
	cin>>nota2;
	cout<<"Ingrese nota3: ";
	cin>>nota3;
	
	notaFinalMedia= (nota1+nota2+nota3)/3;
	
	cout<<"la final media es:"<<notaFinalMedia;
	
	return 0;
	
}

*/

#include <Arduino.h>

	float nota1, nota2, nota3;
	int notaFinalMedia;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Ingrese nota1: "); while(Serial.available()){} nota1 = Serial.parseInt();	
	Serial.println("Ingrese nota2: "); while(Serial.available()){} nota2 = Serial.parseInt();
	Serial.println("Ingrese nota3: "); while(Serial.available()){} nota3 = Serial.parseInt();	
		
  	notaFinalMedia= (nota1+nota2+nota3)/3;
	  
	Serial.println("la final media es: " + String(notaFinalMedia));
 
	
}