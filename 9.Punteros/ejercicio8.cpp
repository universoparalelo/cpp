/*Ejercicio 8: pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a, e, i, o, u; en la cadena de caracteres.
Nota: usar punteros */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
void buscarVocales(char *);

char cadena[30];

int main(){
	pedirDatos();
	buscarVocales(cadena);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(cadena, 30, '\n');
	
	strlwr(cadena);
}

void buscarVocales(char *cadena){
	int a=0, e=0, i=0, o=0, u=0;
	
	while(*cadena){
		switch(*cadena){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
		cadena++;
	}
	
	cout<<"\nCantidad de 'a': "<<a<<endl;
	cout<<"Cantidad de 'e': "<<e<<endl;
	cout<<"Cantidad de 'i': "<<i<<endl;
	cout<<"Cantidad de 'o': "<<o<<endl;
	cout<<"Cantidad de 'u': "<<u<<endl;
}
