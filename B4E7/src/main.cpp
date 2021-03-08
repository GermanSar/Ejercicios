/*7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el total de numeros a sumar: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){ 
		suma += i;
	}	
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
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
	Serial.println("Digite el total de numeros a sumar:"); while(!Serial.available()){} n = Serial.parseInt();	
    	Serial.print(String(n));
	
	for(int i=1;i<=n;i++){ 
		suma += i;
	}
	
  	Serial.println("\nLa suma es: " + String(suma));

	system("pause");  

}
