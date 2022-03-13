/*Bloque 3: Estructuras Condicionales
Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos 
es el mayor. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x,y;
	
	cout<<"Digite un numero: "; cin>>x;
	cout<<"Digite otro numero: "; cin>>y;
	
	if(x>y){
		cout<<"El mayor es: "<<x<<endl;
	}
	else if(y>x){
		cout<<"El mayor es: "<<y<<endl;
	}
	else{
		cout<<"Los numeros digitados son iguales"<<endl;
	}
	
	getch();
	return 0;
}
