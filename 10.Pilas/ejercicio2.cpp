/*Ejercicio 2: hacer un programa en C++ utilizando Pilas que contenga el siguiente menú:
1. Insertar un caracter a la pila.
2. Mostrar todos los elementos de la pila.
3. Salir. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

void Menu();
void agregarCaracter(Nodo *&, char);
void sacarCaracter(Nodo *&, char &);

int rta;

int main(){
	Nodo *pila = NULL;
	
	char dato;
	


while(rta<3){
	Menu();
	
	if(rta==1){
		cout<<"\nDigite un caracter: ";
		cin>>dato;
		agregarCaracter(pila,dato);
	}
	else if(rta==2){
		cout<<"\nSacando elementos de la PILA\n";
		while(pila!=NULL){
			sacarCaracter(pila,dato);
			if(pila!=NULL){
			cout<<dato<<", ";
			}
			else{
				cout<<dato<<".";
			}
		}
		cout<<"\n";
	}
}

	getch();
	return 0;
}

void Menu(){
	
	cout<<"\nBloque Pilas\n";
	cout<<"1. Insertar un caracter a la pila\n";
	cout<<"2. Mostrar todos los elementos de la pila\n";
	cout<<"3. Salir";
	cout<<"\nEscoger un numero: ";
	cin>>rta;	
}

void agregarCaracter(Nodo *&pila,char n){
	Nodo *nuevo_nodo = new Nodo;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" ha sido agrega a PILA correctamente\n"; 
}

void sacarCaracter(Nodo *&pila, char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}


