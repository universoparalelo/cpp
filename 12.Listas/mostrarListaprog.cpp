#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *sgt;	
};

void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);

Nodo *lista = NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opc,dato;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elemento a la lista\n";
		cout<<"2. Mostrar elementos de la lista\n";
		cout<<"3. Salir\n";
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 2: mostrarLista(lista);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc!=3);
}
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->sgt;
	}
	
	if(lista==aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->sgt = nuevo_nodo;
	}
	
	nuevo_nodo->sgt = aux1;
	
	cout<<"\nElemento "<<n<<" ha sido agregado a LISTA correctamente";
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual!=NULL){
		cout<<actual->dato<<"-> ";
		actual = actual->sgt;
	}
}
