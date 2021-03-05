/*11. Hacer un programa que simule un cajero automático con un saldo inicial 
de 1000 Dólares.

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 
	
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta: "; 
				cin>>extra;
				
				saldo = saldo_inicial + extra;
				cout<<"\nDinero en cuenta: "<<saldo; break;
		case 2: cout<<"\nCuanto dinero desea retirar: "; 
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"\nDinero en cuenta: "<<saldo; break;
				}
		case 3: break;
		dafault: cout<<"Se equivoco de opcion de menu";break;
	}
	
	return 0;
}

*/

#include <Arduino.h>

	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Bienvenido a su cajero automatico");
	Serial.println("1. Ingresar dinero en cuenta");
	Serial.println("2. Retirar dinero de la cuenta");
	Serial.println("3. Salir");
	Serial.println("Opcion:");
	Serial.println("Opc: "); while(Serial.available()){} opc = Serial.parseInt();	
	
	switch(opc){
		case 1: Serial.println("\nCuanto dinero desea ingresar en cuenta"); while(Serial.available()){} extra = Serial.parseInt();
								
				saldo = saldo_inicial + extra;

				Serial.println("\nDinero en cuenta: " + String(saldo));break;

		case 2: Serial.println("\nCuanto dinero desea retirar"); while(Serial.available()){} retiro = Serial.parseInt();
		
				
				if(retiro > saldo_inicial){

					Serial.println("No cuenta con esa cantidad: ");
					
				}
				else{
					saldo = saldo_inicial - retiro;
					Serial.println("\nDinero en cuenta: " + String(saldo));break;

				}
		case 3: break;
		dafault: Serial.println("No cuenta con esa cantidad: ");break;
	}


}
