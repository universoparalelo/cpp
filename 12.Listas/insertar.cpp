/* Insertar elementos en una lista

1. Crear un nuevo nodo
2. Asignar a nuevo_nodo->dato del elementos que queremos incluir a la lista
3. Crear dos nodos auxiliares y asignar lista al primero de ellos.
4. Insertar el elemento a la lista

1. lista->NULL;

void insertarLista(Nodo *&lista, int n)
	Nodo *nuevo_nodo = new Nodo();
}

2. nuevo_nodo->dato = n;

3. Nodo *aux1 = lista;
   Nodo *aux2;
   
   aux 1->NULL
   lista->NULL
   
4. vamos a tener tres casos de listas:

1.lista->NULL(al principio)

2.lista->Nodo->NULL(en medio)

3.lista->Nodo->Nodo->NULL(al final)

pero vamos a tener 2 casos para insertar elementos en la lista: 
-al principio
-en medio o al final

1er caso para insertar:
nuevo_nodo->dato->NULL
lista=nuevo_nodo;
nuevo_nodo->siguiente=aux1;

2do caso:
while((aux1 != NULL)&&(aux1->dato < n)){
	aux2 = aux1;
	aux1 = aux1->siguiente;
}
lista = nuevo_nodo; 
nuevo_nodo->siguiente = aux1;

nuevo_nodo = aux2->siguiente;
aux1 = nuevo_nodo->siguiente;

POR LO TANTO EL CODIGO QUEDARIA ASI:

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista==aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
} */
