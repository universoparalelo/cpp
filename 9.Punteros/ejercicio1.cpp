//Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número. Con punteros.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dirNum;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	dirNum = &num;
	
	if(*dirNum%2==0){
		cout<<"\nEl numero "<<*dirNum<<" es par"<<endl;
		cout<<"Posicion: "<<dirNum<<endl;
	}
	else{
		cout<<"\nEl numero: "<<*dirNum<<" es impar"<<endl;
		cout<<"Posicion: "<<dirNum<<endl;
	}
	
	getch();
	return 0;
}
