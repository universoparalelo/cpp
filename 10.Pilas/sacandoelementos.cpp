/*Sacar elementos de la pila

1. Crear una variable *aux de tipo Nodo e igualarla a pila

Nodo *aux = pila;

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
}

2. Igualar el n a aux->dato;

n = aux -> dato;

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato;
}

3. Pasar pila a siguiente nodo

pila = aux -> siguiente;

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
}

4. Eliminar aux

delete aux; 

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato;
	delete aux;
}
*/

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
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"\nDigite otro numero: ";
	cin>>dato;
	agregarPila(pila,dato);

	cout<<"\n Sacando los elementos de la pila: ";
	while(pila != NULL){
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

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nEl numero "<<n<<" fue agregado a la pila"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
