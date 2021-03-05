/*5. Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe 
entregar la suma de los valores mayores a 0 introducidos.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, suma = 0;
	
	do{
		cout<<"Digite un numero: "; 
		cin>>numero; 
		
		if(numero>0){
			suma += numero;
		}
		
	}while( ((numero<20) || (numero>30)) && (numero!=0) );
	
	cout<<"\nLa suma de todos los numeros mayores a cero es: "<<suma<<endl;
	
	getch();
	return 0;
}

*/

#include <Arduino.h>

int numero, suma = 0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	do{
		Serial.println("Digite un numero: "); while(Serial.available()){} numero = Serial.parseInt();	

		
		if(numero>0){
			suma += numero;
		}
		
	}while( ((numero<20) || (numero>30)) && (numero!=0) );
	
	Serial.println("\nLa suma de todos los numeros mayores a cero es:" + String(suma));
	

}
