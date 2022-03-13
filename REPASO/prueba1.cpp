/*escriba un programa que solicite la entrada estandar un numero entero del 1 al
10 y muestre en la salida estandar su tabla de multiplicar */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, resultado=0; 
	
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
	}while((numero<1)||(numero>10));
	
	for(int i=1;i<=10;i++){
		resultado = numero * i; 
		cout<<"\n"<<numero<<"*"<<i<<"="<<resultado;
	}

	getch();
	return 0;
}
