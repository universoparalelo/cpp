//prueba 

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

int main(){
	menu();
	
	getch();
	return 0;
}

void menu(){
	int dato,rta;
	
	Nodo *pila = NULL;
	
	do{
		cout<<"::MENU::"<<endl;
		cout<<"1. Agregar elemento a la pila"<<endl;
		cout<<"2. Sacar elementos de la pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Escoger un numero: ";
		cin>>rta;
		
		switch(rta){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					agregarPila(pila,dato);
					break;
			case 2: cout<<"\nSacando elementos de la pila: ";
					while(pila!=NULL){
					sacarPila(pila,dato);
					if(pila!=NULL){
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

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	
	pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	
	delete aux;
}
