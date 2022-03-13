/*Busqueda de elemento

1. Crear un nuevo nodo(actual)
2. Igualar ese nuevo nodo (actual) a la lista
3. Recorrer la lista
4. Determinar si el elemento existe o no en la lista

void busqueda(Nodo *lista,int n){
	bool band = false;

	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band= true;
		}
		actual = actual->sgt;	
	}
	
	if(band == true){
		cout<<"Elemento "<<n<<" SI ha sido encontrado en lista\n";
	}
	else{
		cout<<"Elemento "<<n<<" NO ha sido encontrado en lista\n";
	}
}
*/

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
void busqueda(Nodo *,int);

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
		cout<<"3. Buscar elemento en lista\n";
		cout<<"4. Salir\n";
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
			case 3: cout<<"\nDigite el numero a buscar: ";
					cin>>dato;
					busqueda(lista,dato);
					cout<<"\n";
					system("pause");
		}
		system("cls");
	}while(opc!=4);
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

void busqueda(Nodo *lista,int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band = true;
		}
		actual = actual->sgt;
	}
	
	if(band == true){
		cout<<"Elemento "<<n<<" SI ha sido encontrado en la lista\n";
	}
	else{
		cout<<"Elemento "<<n<<" NO ha sido encontrado en la lista\n";
	}
}
