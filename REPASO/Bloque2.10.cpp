/*Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación 
de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:
		x = (-b+-raiz cuadrado de(b al cuadrado - 4ac)) / (2a) */
		
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	float a,b,c,totalX1,totalX2, raiz;
	
	cout<<"Digite el valor para 'a'(en ax^2): "; cin>>a;
	cout<<"Digite el valor para 'b' (en bx): "; cin>>b;
	cout<<"Digite el valor para 'c' (en c): "; cin>>c;
	
	raiz = pow(b,2) - (4*a*c);
	totalX1 = (-b + sqrt(raiz)) / (2*a);
	totalX2 = (-b - sqrt(raiz)) / (2*a);
	
	cout<<"X1: "<<totalX1<<endl;
	cout<<"X2: "<<totalX2<<endl;
	
	getch();
	return 0;
}
