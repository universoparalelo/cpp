#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);
void sacarCola(Nodo *&, Nodo *&, int &);

int main(){
	int dato,rta;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout<<"::MENU::"<<endl;
		cout<<"1. Agregar elemento a la cola"<<endl;
		cout<<"2. Sacar elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Escoger un numero: ";
		cin>>rta;
		
		switch(rta){
			case 1: cout<<"Digite un numero: ";
					cin>>dato;
					agregarCola(frente,fin,dato);
					break;
			case 2: cout<<"Sacando elementos de la cola: ";
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
	}while(rta != 3);
	
	getch();
	return 0;
}

void agregarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo ();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}

bool colaVacia (Nodo *frente){
	return (frente == NULL)? true : false;
}

void sacarCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
