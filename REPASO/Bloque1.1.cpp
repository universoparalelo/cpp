/*Bloque 1: Introducci�n y Entrada-Salida
Ejercicio 1: Escribe un programa que lea de la entrada est�ndar dos n�meros 
y muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.
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
