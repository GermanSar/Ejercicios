/*10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde. 

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero entre [1-12]: ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Enero";break;
		case 2: cout<<"Febrero";break;
		case 3: cout<<"Marzo";break;
		case 4: cout<<"Abril";break;
		case 5: cout<<"Mayo";break;
		case 6: cout<<"Junio";break;
		case 7: cout<<"Julio";break;
		case 8: cout<<"Agosto";break;
		case 9: cout<<"Septiembre";break;
		case 10: cout<<"Octubre";break;
		case 11: cout<<"Noviembre";break;
		case 12: cout<<"Diciembre";break;
		default: cout<<"No existe mes para ese numero";break;
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
	
	Serial.println("Digite un numero entre [1-12]: "); while(!Serial.available()){} numero = Serial.parseInt();	
	Serial.print(String(numero));
	
	switch(numero){
		case 1: Serial.println("ENERO "); break;
		case 2: Serial.println("FEBRERO "); break;
		case 3: Serial.println("MARZO "); break;
		case 4: Serial.println("ABRIL "); break;
		case 5: Serial.println("MAYO "); break;
		case 6: Serial.println("JUNIO "); break;
		case 7: Serial.println("JULIO "); break;
		case 8: Serial.println("AGOSTO "); break;
		case 9: Serial.println("SEPTIEMBRE "); break;
		case 10: Serial.println("OCTUBRE "); break;
		case 11: Serial.println("NOVIEMBRE "); break;
		case 12: Serial.println("DICIEMBRE "); break;
		default: Serial.println("NO EXISTE "); break;
	}
	

}
