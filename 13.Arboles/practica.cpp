//practica

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
void insertar(Nodo *&,int,Nodo *);
void mostrar(Nodo *,int);
bool buscar(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruir(Nodo *);

Nodo *arbol = NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int dato,cont=0,opc;
	
	do{
		cout<<"\t::MENU::"<<endl;
		cout<<"1. Insertar otro elemento"<<endl;
		cout<<"2. Mostrar el arbol completa"<<endl;
		cout<<"3. Buscar un elemento"<<endl;
		cout<<"4. Motrar arbol en PreOrden"<<endl;
		cout<<"5. Mostrar arbol en InOrden"<<endl;
		cout<<"6. Mostrar arbol en PostOrden"<<endl;
		cout<<"7. Eliminar un elemento"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertar(arbol,dato,NULL);
					cout<<"\n";
					system("pause");
					break;
			case 2: cout<<"\nMostrando el arbol completo:\n\n";
					mostrar(arbol,cont);
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a buscar: ";
					cin>>dato;
					if(buscar(arbol,dato) == true){
						cout<<"\nElemento "<<dato<<" SI se encuentra en el arbol"<<endl;
					}
					else{
						cout<<"\nElemento "<<dato<<" NO se encuentrar en el arbol"<<endl;
					}
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nMostrando arbol en PreOrden: \n\n";
					preOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 5: cout<<"\nMostrando el arbol en InOrden: \n\n";
					inOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 6: cout<<"\nMostrando arbol en PostOrden: \n\n";
					postOrden(arbol);
					cout<<"\n";
					system("pause");
					break;
			case 7: cout<<"\nDigite el elemento a eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc!=8);	
}

Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

void insertar(Nodo *&arbol,int n,Nodo *padre){
	if(arbol == NULL){
		Nodo *nuevoNodo = crearNodo(n,padre);
		arbol = nuevoNodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n < valorRaiz){
			insertar(arbol->izq,n,arbol);
		}
		else{
			insertar(arbol->der,n,arbol);
		}
	}
}

void mostrar(Nodo *arbol,int cont){
	if(arbol == NULL){
		return;
	}
	else{
		mostrar(arbol->der,cont+1);
		for(int i=0; i<cont; i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrar(arbol->izq,cont+1);
	}
}

bool buscar(Nodo *arbol,int n){
	if(arbol == NULL){
		return false;
	}
	else if(arbol->dato == n){
		return true;
	}
	else if(arbol->dato > n){
		buscar(arbol->izq,n);
	}
	else{
		buscar(arbol->der,n);
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
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
		postOrden(arbol->izq);
	}
}

void eliminar(Nodo *arbol,int n){
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarNodo(arbol);
	}
}

void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->der && nodoEliminar->izq){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruir(nodoEliminar);
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruir(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar,NULL);
		destruir(nodoEliminar);
	}
}

Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){
		return NULL;
	}
	if(arbol->izq){
		minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}

void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}

void destruir(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
