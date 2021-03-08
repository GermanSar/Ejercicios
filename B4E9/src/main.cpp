/*9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,factorial=1;
	
	cout<<"Digite un numero: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}

*/

#include <Arduino.h>

int n,factorial=1;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	Serial.println("Digite un numero: "); while(!Serial.available()){} n = Serial.parseInt();	
    	Serial.print(String(n));

	for(int i=1;i<=n;i++){
		factorial *= i;
	}

	Serial.println("\nEl factorial del numero es: " + String(factorial));
	system("pause");
}
