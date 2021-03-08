/*6. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula, es una vocal 
mayúscula o no es una vocal.

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
		case 'u': cout<<"Es una vocal minuscula";break;
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal MAYUSCULA";break;
		default : cout<<"No es una vocal";break;
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
	
	Serial.println("Digite un caracter: "); while(!Serial.available()){} letra = Serial.parseInt();	
	Serial.print(String(letra));

	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': Serial.println("es una vocal minuscula: " + char(letra)); break;
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U': Serial.println("es una vocal MAYUSCULA: " + char(letra)); break;
		default : Serial.println("no es una vocal: " + char(letra)); break;
	}

}
