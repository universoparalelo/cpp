/*Ejercicio 1: hacer un programa en c++, utilizando colas que contengan el siguiente menu: 

1. Insertar un caracter a una cola.
2. Mostrar todos los elementos de la cola
3. Salir

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void Menu();
void agregarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void sacarCola(Nodo *&, Nodo *&, char &);

int main(){
	
	Menu();
	
	getch();
	return 0;
}

void Menu(){
	int rta;
	char dato;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
	cout<<"\t.:Menu:."<<endl;
	cout<<"1. Insertar un caracter a una cola."<<endl;
	cout<<"2. Mostrar todos los elementos de la cola"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Escoja una opcion: ";
	cin>>rta;
	
	switch(rta){
		case 1: 
			cout<<"\nDigite un caracter: ";
			cin>>dato;
			agregarCola(frente,fin,dato);
			break;
		
		case 2: 
			cout<<"\nSacando los elementos: ";
			while(frente != NULL){
			sacarCola(frente,fin,dato);
			
			if(frente!=NULL){
				cout<<dato<<", ";
			}
			else{
				cout<<dato<<".";
				cout<<"\n"<<endl;
			}
		}
		system("pause");
		break;
		case 3: break;
	    
		}
		system("cls");
		
	}while(rta!=3);
}

void agregarCola (Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void sacarCola(Nodo *&frente, Nodo *&fin, char &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente=NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
