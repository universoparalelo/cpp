/*Ejercicio 2: hacer un programa en C++ utilizando Pilas que contenga el siguiente menú:
1. Insertar un caracter a la pila.
2. Mostrar todos los elementos de la pila.
3. Salir. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

int rta;

int main(){
	Nodo *pila = NULL;
	
	int dato;
	
	while(rta<3){
		menu();
	if(rta == 1){
		cout<<"\nDigite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		system("cls");
	}
	else if(rta == 2){
		cout<<"\nSacando elementos de la pila: ";
		while(pila!=NULL){
			sacarPila(pila,dato);
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

void menu(){

	cout<<"\t::MENU::"<<endl;
	cout<<"1. Agregar elemento a Pila"<<endl;
	cout<<"2. Mostrar elementos"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Escoger un numero: ";
	cin>>rta;


	
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo = new Nodo();
	nuevo->dato = n;
	nuevo->siguiente = pila;
	pila = nuevo;
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
