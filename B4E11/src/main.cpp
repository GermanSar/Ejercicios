/*11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int n,suma=0,elevacion=0;
	
	cout<<"Digite el numero de terminos a sumar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}

*/

#include <Arduino.h>

int n,suma=0,elevacion=0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	Serial.println("Digite el numero de terminos a sumar: "); while(Serial.available()){} n = Serial.parseInt();	
    
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}

	Serial.println("\nLa suma es: " + String(suma));
	system("pause");
}
