//prueba

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void agregarCola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
void sacarCola(Nodo *&, Nodo *&, int &);

int main(){
	menu();
	
	getch();
	return 0;
}

void menu(){
	int dato,rta;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout<<"::MENU::"<<endl;
		cout<<"1. Agregar elementos a la cola"<<endl;
		cout<<"2. Sacar elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Escoger un numero: ";
		cin>>rta;
		
		switch(rta){
			case 1: 
				cout<<"\nDigite un numero: ";
				cin>>dato;
				agregarCola(frente,fin,dato);
				break;
			case 2: 
				cout<<"\nSacando los elementos: ";
				while(frente!=NULL){
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

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void sacarCola(Nodo *&frente,Nodo *&fin, int &n){
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
