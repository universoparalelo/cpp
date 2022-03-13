/*Ejercicio 21: Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual que cero: x^y.*/

#include<iostream>
#include<conio.h>
using namespace std;

int potencia(int,int);

int main(){
	int base, exponente;
	
	cout<<"Digite la base: "; cin>>base;
	cout<<"Digite el exponente: "; cin>>exponente;
	
	cout<<"\nEl resultado de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

int potencia(int x, int y){
	int z=0;
	
	if(y == 1){
		z = x;
	}
	else{
		z = x * potencia(x,y-1);
	}
	
	return z;
}
