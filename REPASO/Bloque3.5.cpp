/*Ejercicio 5: Escriba un programa que lea de la entrada est�ndar un car�cter 
e indique en la salida est�ndar si el car�cter es una vocal min�scula o no.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: "; cin>>letra;
	
	if(letra>='a' && letra<='z'){
		cout<<"El caracter digitado es una letra MINUSCULA"<<endl;
	}
	else if(letra>='A' && letra<='Z'){
		cout<<"El caracter digitado es una letra MAYUSCULA"<<endl;
	}
	else{
		cout<<"El caracter digitado no es una letra"<<endl;
	}
	
	getch();
	return 0;
}
