/* Ejercicio 1: hacer un programa para agregar enteros a una pila, hasta que el usuario lo decida,
despues mostrar todos los numeros introducidos en la pila */

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
	Nodo *pila = NULL;
	int dato;
	char rta;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDesea agregar otro elemento a la PILA?(s/n)";
		cin>>rta;
	}while((rta=='s')||(rta=='S'));
	
	cout<<"\nSacando los elementos de la PILA: ";
	
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
	Nodo *nuevo_nodo = new Nodo;
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" ha sido agregado a PILA correctamente\n";
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
