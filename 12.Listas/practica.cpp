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
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo *,int);
void eliminarLista(Nodo *&,int &);

Nodo *lista = NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int dato,rta;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"\n1. Insertar un elemento a la lista";
		cout<<"\n2. Mostrar elementos";
		cout<<"\n3. Buscar un elemento";
		cout<<"\n4. Eliminar un nodo";
		cout<<"\n5. Eliminar toda la lista";
		cout<<"\n6. Salir\n";
		cout<<"\nOpcion: ";
		cin>>rta;
		cout<<"\n";
		
		switch(rta){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 2: cout<<"\nSacando los elementos: ";
					mostrarLista(lista);
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nDigite el dato a buscar: ";
					cin>>dato;
					buscarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nDigite el nodo que desea borrar: ";
					cin>>dato;
					eliminarNodo(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 5: while(lista!=NULL){
					eliminarLista(lista,dato);
					cout<<dato<<" -> ";
				}
				cout<<"\n";
				system("pause");
				break;
		}
		system("cls");
	}while(rta!=6);
}

void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato<n)){
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
	
	cout<<"\nElemento "<<n<<" ha sido agregado correctamente";
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual!=NULL){
		cout<<actual->dato<<" -> ";
		actual = actual->sgt;
	}
}

void buscarLista(Nodo *lista,int n){
	bool band = false;
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->sgt;
	}
	
	if(band == true){
		cout<<"\nEl elemento "<<n<<" SI existe en la lista";
	}
	else{
		cout<<"\nEl elemento "<<n<<" NO existe en la lista";
	}
}

void eliminarNodo(Nodo *lista,int n){
	if(lista!=NULL){
		Nodo *aux_borrar = new Nodo();
		aux_borrar = lista;
		Nodo *anterior = NULL;
		
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->sgt;
		}
		
		if(aux_borrar == NULL){
			cout<<"\nEl elemento no existe en la lista";
		}
		else if(anterior==NULL){
			lista = lista->sgt;
			delete aux_borrar;
		}
		else{
			anterior->sgt = aux_borrar->sgt;
			delete aux_borrar;
		}
	}
}

void eliminarLista(Nodo *&lista,int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->sgt;
	delete aux;
}
	

