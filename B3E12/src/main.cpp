/*12. Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
	Case 3: salir.


#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int opc,numero,cubo;
	
	cout<<"\tMENU"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"\nDigite un numero: "; cin>>numero;
			cubo = pow(numero,3); //elevamos el numero al cubo
			cout<<"El cubo del numero es: "<<cubo;break;
		case 2: 
			cout<<"\nDigite un numero: "; cin>>numero;
			
			if(numero%2==0){
				cout<<"El numero es par";
			}
			else{
				cout<<"El numero es impar";
			}
			break;
		case 3: break;
	}
	
	return 0;
}

*/

#include <Arduino.h>

int opc,numero,cubo;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{

    Serial.println("\tMENU");
	Serial.println("1. Cubo de un numero");
	Serial.println("2. Numero par o impar");
	Serial.println("3. Salir");
	Serial.println("Opcion:");
	Serial.println("Opc: "); while(Serial.available()){} opc = Serial.parseInt();

    switch(opc){
		case 1: 
			Serial.println("Digite un numero: "); while(Serial.available()){} numero = Serial.parseInt();	

			cubo = pow(numero,3); //elevamos el numero al cubo

			Serial.println("el cubo del numero es: " + String(cubo));
			
		case 2: 
			Serial.println("Digite un numero: "); while(Serial.available()){} numero = Serial.parseInt();	
			
			if(numero%2==0){
				Serial.println("el numero es par");
			}
			else{
				Serial.println("el numero es impar");
			}
			break;
		case 3: break;
	}

	
}