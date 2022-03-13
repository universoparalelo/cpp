//ejercicio 2: crear una lista que almacene n numeros reales y calcular su suma y promedio de estos

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void calcularSuma(Nodo *, int);
void calcularPromedio(Nodo *, int);

int main(){
	int dato, contador=0;
	char opc;
	
	Nodo *lista = NULL;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato);
		cout<<"\Desea agregar otro numero?(s/n): ";
		cin>>opc;
		contador++;
	}while((opc=='s')||(opc=='S'));
	
	calcularSuma(lista,contador);
	calcularPromedio(lista,contador);
	
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
	cout<<"\nElemento "<<n<<" agregado a la lista\n";
}

void calcularSuma(Nodo *lista, int n){
	int suma=0;
	
	for(int i=0;i<n;i++){
		suma += (lista->dato);
		lista = lista->siguiente;
	}
	
	cout<<"\nEl total de la suma es: "<<suma<<endl;
}

void calcularPromedio(Nodo *lista, int n){
	float promedio=0.0;
	int suma=0;
	
	for(int i=0;i<n;i++){
		suma += (lista->dato);
		lista = lista->siguiente;
	}
	
	promedio = suma / n;
	
	cout<<"\nEl promedio es: "<<promedio<<endl;
	
	
}
