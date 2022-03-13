/* 1. Hacer un program que pida al usuario que digite una cadena de caracteres, luego verificar la cantidad de caracteres
y mostrarla solo si supera los 10 digitos */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	int longitud=0;
	
	cout<<"Escriba algo: ";
	cin.getline(palabra, 100, '\n');
	
	longitud = strlen(palabra);
	
	if(longitud<10){
		cout<<"Caracteres insuficientes"<<endl;
	}
	else{
		cout<<palabra<<endl;
	}
}
