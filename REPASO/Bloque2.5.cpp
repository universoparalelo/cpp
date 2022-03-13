/*Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de 
dos variables.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x,y,aux=0;
	
	cout<<"Digite un valor para x: "; cin>>x;
	cout<<"Digite un valor para y: "; cin>>y;
	
	cout<<"\nValor original de x: "<<x<<endl;
	cout<<"Valor original de y: "<<y<<endl;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nNuevo valor de x: "<<x<<endl;
	cout<<"Nuevo valor de y: "<<y<<endl;
	
	getch();
	return 0;
}
