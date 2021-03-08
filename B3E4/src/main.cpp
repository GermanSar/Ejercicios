/*4. Comprobar si un número digitado por el usuario es positivo o negativo.

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; 
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero>0){
		cout<<"El numero es positivo";
	}
	else{
		cout<<"El numero es negativo";
	}
	
	
	
	return 0;
}

*/

#include <Arduino.h>

	int numero;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite un numero: "); while(!Serial.available()){} numero = Serial.parseInt();	
	Serial.print(String(numero));
	
	if(numero==0){
		Serial.println("el numero es cero: " + String(numero));
	}
	else if(numero>0){
		Serial.println("El numero es positivo: " + String(numero));
	}
	else{
		Serial.println("El numero es negativo: " + String(numero));
	}

		
 
	
}
