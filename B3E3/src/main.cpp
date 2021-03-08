/*3. Realice un programa que lea un valor entero y determine si se trata de un 
número par o impar.

#include<iostream>

using namespace std;

int main(){
	long long int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	
	
	return 0;
}

*/

#include <Arduino.h>

	long long int numero;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite un numero: "); while(!Serial.available()){} numero = Serial.parseInt();	
	Serial.print(String(numero));	
	
	if(numero==0){
		Serial.println("el numero es cero: " + long(numero));
	}
	else if(numero%2==0){
		Serial.println("el numero es par: " + long(numero));
	}
	else{
		Serial.println("el numero es impar: " + long(numero));
	}


}
