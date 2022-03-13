//ejercicio 1: memnor y mayor elemento de la lista

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int );
void mostrarLista(Nodo *);
void mayorMenor(Nodo *);

int main(){
	int dato;
	char opc;
	
	Nodo *lista = NULL;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato);
		cout<<"\nDesea agregar otro numero?(s/n): ";
		cin>>opc;
	}while((opc=='s')||(opc=='S'));
	
	cout<<"\nMostrando elementos: ";
	mostrarLista(lista);
	cout<<"\n";
	
	mayorMenor(lista);
	
	getch();
	return 0;
}

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista==NULL){
		lista = nuevo_nodo;
	}
	else{
		aux = lista;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	
	cout<<"\nElemento "<<n<<" agregado a lista correctamente\n";
}

void mostrarLista(Nodo *lista){
	while(lista!=NULL){
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente;
	}
}

void mayorMenor(Nodo *lista){
	int mayor=0, menor=99999;
	
	while(lista!=NULL){
		if(lista->dato > mayor){
			mayor = lista->dato;
		}
		if(lista->dato < menor){
			menor = lista->dato;
		}
		lista = lista->siguiente;
	}
	
	cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	cout<<"\nEl menor elemento es: "<<menor<<endl;
}
