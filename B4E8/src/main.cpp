/*8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite la cantidad de elementos que desea sumar: ";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
	cout<<"La suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}

*/

#include <Arduino.h>

int n,suma=0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	Serial.println("Digite la cantidad de elementos que desea sumar: "); while(!Serial.available()){} n = Serial.parseInt();	
    	Serial.print(String(n));
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
  	Serial.println("La suma es: " + String(suma));
	system("pause");
}
