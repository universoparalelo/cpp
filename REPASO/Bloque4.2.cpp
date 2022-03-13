/* Bloque 4. 2: realice un programa que lea de la entrada estandar nuemros 
hasta que se introduzca un cero. en ese momentos el programa debe terminar y mostrar
en la salidad estandar el numero de valores mayores que cero leidos */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, contador=0;
	
	do{
		cout<<"Introduzca un numero: ";
		cin>>n;
		if(n>0){
			contador++;
		}
	}while(n!=0);
	
	cout<<"\nCantidad de numeros mayores a cero: "<<contador<<endl;
	
	
	getch();
	return 0;
}
