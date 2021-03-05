/*2. Escriba un programa que lea tres números y determine cuál de ellos es 
el mayor.

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Digite 3 numeros: "; 
	cin>>n1>>n2>>n3;
	
	if((n1>n2)&&(n1>n3)){
		cout<<"El mayor es: "<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
		cout<<"El mayor es: "<<n2;
	}
	else{
		cout<<"El mayor es: "<<n3;
	}
	
	
	
	return 0;
}

*/

#include <Arduino.h>

	int n1,n2,n3;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite el valor de n1: "); while(Serial.available()){} n1 = Serial.parseInt();	
	Serial.println("Digite el valor de n2: "); while(Serial.available()){} n2 = Serial.parseInt();
	Serial.println("Digite el valor de n3: "); while(Serial.available()){} n3 = Serial.parseInt();
		
	if((n1>n2)&&(n1>n3)){
		Serial.println("el mayor es: " + String(n1));
	}
	else if((n2>n1)&&(n2>n3)){
		Serial.println("el mayor es: " + String(n2));
	}
	else{
		Serial.println("el mayor es: " + String(n3));
	}
 
	
}
