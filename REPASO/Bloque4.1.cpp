/*Bloque 4: 1. realice un programa que solicite de la entrada estándar un 
entero del 1 al 10 y muestre en la salida su table de multiplicar */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n=0;
	
	do{
	cout<<"Digite un numero para ver su tabla: ";
	cin>>n;
	cout<<"\n";
	}while((n<1) || (n>10));
	
	for(int i=1 ; i<=10 ; i++){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		
	}
	
	getch();
	return 0;
}
