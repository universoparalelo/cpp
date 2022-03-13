#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *izq;
	Nodo *der;
	Nodo *padre;
};

void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruir(Nodo *);

Nodo *arbol=NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int dato,opc,cont=0;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar el arbol completo"<<endl;
		cout<<"3. Buscar un elemento en el arbol"<<endl;
		cout<<"4. Recorrer el arbol en preOrden"<<endl;
		cout<<"5. Recorrer el arbol en inOrden"<<endl;
		cout<<"6. Recorrer el arbol en postOrden"<<endl;
		cout<<"7. Eliminar un nodo"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarNodo(arbol,dato,NULL);//insertamos un nuevo nodo
					cout<<"\n";
					system("pause");
					break;
			case 2: cout<<"\nMostrando el arbol:\n\n";
					mostrarArbol(arbol,cont);
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a buscar: ";
					cin>>dato;
					if(busqueda(arbol,dato)==true){
						cout<<"\nElemento "<<dato<<" SI pertenece al arbol\n";
					}
					else{
						cout<<"\nElemento "<<dato<<" NO pertenece al arbol\n";
					}
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nRecorriendo lista en PreOrden:\n";
					preOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 5: cout<<"\nRecorriendo arbol en InOrden:\n";
					inOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 6: cout<<"\nRecorriendo arbol en PostOrden:\n";
					postOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 7: cout<<"\nDigite el numero a eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 8);
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Funciones para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n,Nodo *padre){
	if(arbol == NULL){//Si el arbol esta vacio
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo;
	}
	else{//Si el arbol tiene un nodo o mas
		int valorRaiz = arbol->dato;//Obtenemos el valor de la raiz
		if(n < valorRaiz){//si el elemento es menor a la raiz, insertamos izq
			insertarNodo(arbol->izq,n,arbol);
		}
		else{//si el elemento es mayor a la raiz, insertamos der
			insertarNodo(arbol->der,n,arbol);
		}
	}
}

//Funcion para mostrar el arbol completo
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol == NULL){//si el arbol esta vacio
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0; i<cont; i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}

//Buscar un elemento en el arbol
bool busqueda(Nodo *arbol,int n){
	if(arbol == NULL){
		return false;
	}
	else if(arbol->dato == n){
		return true;
	}
	else if(n < arbol->dato){
		return busqueda(arbol->izq,n);
	}
	else{
		return busqueda(arbol->der,n);
	}
}

void preOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}

void postOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//Funcion para buscar el nodo a eliminar 
void eliminar(Nodo *arbol,int n){
	if(arbol == NULL){//si el arbol esta vacio
		return;
	}
	else if(n < arbol->dato){//si el nodo a eliminar es menor a la raiz
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){//si el nodo a eliminar es mayor a la raiz
		eliminar(arbol->der,n);
	}
	else{//si encontramos el nodo a eliminar
		eliminarNodo(arbol);
	}
}

//Funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->der && nodoEliminar->izq){//si el nodo tiene izq y der
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){//si tiene un hijo izq
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruir(nodoEliminar);
	}
	else if(nodoEliminar->der){//si tiene un hijo der
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruir(nodoEliminar);
	}
	else{//si el nodo no tiene hijo
		reemplazar(nodoEliminar,NULL);
		destruir(nodoEliminar);
	}
}

//Funcion para eliminar nodo mas izq posible
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){//si esta vacio
		return NULL;
	}
	if(arbol->izq){//si tiene otro nodo a la izq
		minimo(arbol->izq);
	}
	else{//si ya encontro el nodo
		return arbol;
	}
}

//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle a su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		//procedemos a asignarle su nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}

//funcion para destruir un nodo
void destruir(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
