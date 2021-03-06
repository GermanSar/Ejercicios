/*10. Escriba un programa que calcule las soluciones de una ecuación de 
segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: 
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,resultado1 = 0,resultado2 = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nEl resultado 1 es: "<<resultado1<<endl;
	cout<<"El resultado 2 es: "<<resultado2<<endl;
	
	
	return 0;
}

*/

#include <Arduino.h>

	float a,b,c; 
	float resultado1 = 0,resultado2 = 0;

void setup() 
{
  	Serial.begin(9600);
}

void loop() 
{
	
	Serial.println("Digite el valor de a: "); while(!Serial.available()){} a = Serial.parseInt();
	Serial.print(String(a));	
	Serial.println("\nDigite el valor de b: "); while(!Serial.available()){} b = Serial.parseInt();
	Serial.print(String(b));
	Serial.println("\nDigite el valor de c: "); while(!Serial.available()){} c = Serial.parseInt();
	Serial.print(String(c));	
	
	resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

	Serial.println("el resultado 1 es: " + String(resultado1));
	Serial.println("el resultado 2 es: " + String(resultado2));
 
	
}
