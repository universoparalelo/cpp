/*Ejercicio 6: Escriba un programa que lea de la entrada est�ndar un car�cter 
e indique en la salida est�ndar si el car�cter es una vocal min�scula, es una 
vocal may�scula o no es una vocal.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char vocal;
	
	cout<<"Digite un caracter: ";
	cin>>vocal;
	
	if(vocal=='a'||vocal=='e'||vocal=='i'||vocal=='o'||vocal=='u'){
		cout<<"El caracter digitado es una vocal minuscula"<<endl;
	}
	else if(vocal=='A'||vocal=='E'||vocal=='I'||vocal=='O'||vocal=='U'){
		cout<<"El caracter digitado es una vocal MAYUSCULA"<<endl;
	}
	else{
		cout<<"El caracter digitado no es una vocal"<<endl;
	}
	
	getch();
	return 0;
}
