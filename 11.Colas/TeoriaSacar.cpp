/*Eliminas elementos de una cola

1. Obtener el valor del nodo.
2. Crear un nodo aux y asignarle el frente de la cola.
3. Eliminar el nodo del frente de la cola.

1.
	struct Nodo {
		int dato;
		Nodo *siguiente;
	}
	
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
}

2.
	Nodo *aux = frente;
	
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
}

3.
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente = NULL;
		fin == NULL;
	}
	else{
		frente = frente->sgte;
	}
	delete aux;
}

*/
