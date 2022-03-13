#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
	
	cout<<"El numero de vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(nombreUsuario, 30,'\n');
	
	strupr(nombreUsuario);
}

int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){//mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	
	return cont;
}
