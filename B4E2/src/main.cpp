/*2. Realice un programa que lea de la entrada estándar números hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la 
salida estándar el número de valores mayores que cero leídos.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero,conteo=0; 
	
	do{
		cout<<"Digite un numero: "; 
		cin>>numero;
		if(numero>0){
			conteo++; //aumentamos el conteo cada vez que encuentra un numero mayor a 0	
		}
	}while(numero != 0);
	
	
	cout<<"\nEl total de numeros mayores que 0 es: "<<conteo;
	
	getch();
	return 0;
}

*/

#include <Arduino.h>

int numero,conteo=0; 

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{

	do{
		Serial.println("Digite un numero[1-10]:  "); while(!Serial.available()){} numero = Serial.parseInt();	
		Serial.print(String(numero));
		if(numero>0){
			conteo++; //aumentamos el conteo cada vez que encuentra un numero mayor a 0	
		}
	}while(numero != 0);
	
	
	Serial.println(" \nEl total de numeros mayores que 0 es: " + String(conteo));

}




