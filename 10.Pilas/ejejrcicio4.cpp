//Pilas ejercicio sin ayuda

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
	int dato;
	char rta;
	Nodo *pila = NULL;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		cout<<"\nDesea digitar otro numero? (s/n)";
		cin>>rta;
		cout<<"\n";
		
	}while(rta=='s'||rta=='S');
	
	cout<<"\nSacando elementos de Pila: ";
	
	while(pila!=NULL){
		sacarPila(pila,dato);
		
		if(pila!=NULL){
			cout<<dato<<", ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato; 
	pila = aux->siguiente;
	delete aux;
}
