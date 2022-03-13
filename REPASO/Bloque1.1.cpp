/*Bloque 1: Introducción y Entrada-Salida
Ejercicio 1: Escribe un programa que lea de la entrada estándar dos números 
y muestre en la salida estándar su suma, resta, multiplicación y división.
	*/
	
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float x=3,y=4;
	float division;
	
	cout<<"La suma entre "<<x<<" y "<<y<<" es: "<<x+y<<endl;
	cout<<"\nLa resta es: "<<x-y<<endl;
	cout<<"\nEl producto es: "<<x*y<<endl;
	cout<<"\nLa division es: "<<x/y<<endl;
	
	getch();
	return 0;
}
