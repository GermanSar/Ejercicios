/*1. Escriba un programa que lea dos números y determine cuál de ellos es 
el mayor.

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Digite 2 numeros: "; 
	cin>>n1>>n2; //guarando los 2 numeros
	
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	}
	else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else{
		cout<<"El mayor es: "<<n2;
	}
	
	return 0;
}

*/

#include <Arduino.h>

	int n1,n2;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite el valor de n1: "); while(!Serial.available()){} n1 = Serial.parseInt();	
	Serial.print(String(n1));
	Serial.println("Digite el valor de n2: "); while(!Serial.available()){} n2 = Serial.parseInt();
	Serial.print(String(n2));
	
	if(n1==n2){
		Serial.println("Ambos numeros son iguales: " + String(n1==n2));
	}
	else if(n1>n2){
		Serial.println("el mayor es: " + String(n1));
	}
	else{
		Serial.println("el mayor es: " + String(n2));
	}

 
	
}
