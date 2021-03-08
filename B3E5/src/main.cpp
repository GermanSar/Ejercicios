/*5. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula o no.

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: "; 
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		default : cout<<"No es una vocal minuscula"; break;			
	}
		
	return 0;
}

*/

#include <Arduino.h>

	char letra;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite una vocal: "); while(!Serial.available()){} letra = Serial.parseInt();
	Serial.print(String(letra));

	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': Serial.println("es una vocal minuscula: " + char(letra)); break;
		default : Serial.println("NO es una vocal minuscula: " + char(letra));  break;			
	}


}
