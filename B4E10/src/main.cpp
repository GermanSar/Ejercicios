/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
(suma de factoriales).

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,factorial=1;
	
	cout<<"Digite el total de elementos a sumar: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i; //primero sacamos los factoriales
		suma +=factorial; //luego los sumamos
	}
	
	cout<<"\nLa suma de factoriales es: "<<suma<<endl;
	
	system("pause");
	return 0;
}

*/

#include <Arduino.h>

int n,suma=0,factorial=1;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	Serial.println("Digite el total de elementos a sumar: "); while(!Serial.available()){} n = Serial.parseInt();	
    	Serial.print(String(n));
	
	for(int i=1;i<=n;i++){
		factorial *= i; //primero sacamos los factoriales
		suma +=factorial; //luego los sumamos
	}

	Serial.println("\nLa suma de factoriales es:" + String(suma));

	system("pause");
}
