//pilas
/*para insertar elementos en la pila, solo hay que seguir 4 pasos: 
1.Crear el espacio en memoria para almacenar un nodo.
2. Cargar el valor dentro del nodo(dato).
3. Cargar el puntero pila dentro del nodo(*siguiente).
4. Asignar el nuevo nodo a pila. 

1. pila = NULL;
	struct Nodo{
		int dato;
		Nodo *siguiente;
	};
	
void agregraPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
}

2.	struct Nodo{
		int dato;
		Nodo *siguiente;
	};

nuevo_nodo -> dato = 10;

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
}

3. struct Nodo{
		int dato;
		Nodo *siguiente;
	};
	
nuevo_nodo -> siguiente = pila = NULL;

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
}

4. 	struct Nodo{
		int dato;
		Nodo *siguiente;
	};
	
pila = nuevo_nodo;

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
}

Insertar elementos en la pila */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&, int);

int main(){
	Nodo *pila = NULL;
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"\nDigite otro numero: ";
	cin>>n2;
	agregarPila(pila,n2);
	
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

