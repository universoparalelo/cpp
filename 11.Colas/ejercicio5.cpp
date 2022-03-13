//columnas sin ayuda

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarCola(Nodo *&,Nodo *&, int);
bool cola_vacia(Nodo *&);
void sacarCola(Nodo *&,Nodo *&, int &); 

int main(){
	int dato;
	char rta;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarCola(frente,fin,dato);
		cout<<"\nDesea agregar otro numero? (s/n)";
		cin>>rta;
		cout<<"\n";
	} while(rta=='s'||rta=='S');
	
	cout<<"Sacando elementos de la cola: ";
	
	while(frente!=NULL){
		sacarCola(frente,fin,dato);
		if(frente!=NULL){
			cout<<dato<<", ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarCola(Nodo *&frente,Nodo *&fin, int n){
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

bool cola_vacia(Nodo *&frente){
	return (frente==NULL)? true : false;
}

void sacarCola(Nodo *&frente,Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux; 
	
}
