/*Colas
(filas era estuructura Lifo=last input first output)

estructura FIFO= first input first output

Una cola es una estructura de datos, caracterizada por ser una secuencia de elementos en la que la
operacion de insercion se realiza por un extremo y la extraccion por el otro.
Las operaciones usuales en las colas son Insertar y Quitar. La operacion Insertar añade un elemento por
el final de la cola, y la operacion Quitar elimina o extrar un elementos por el extremo opuesto.

Insertar elementos en una cola:

1. Crear espacio en memoria para almacenar un nodo.
2. Asignar ese nuevo nodo al dato que queremos insertar.
3. Asignar los punteros frente y fin hacia el nuevo nodo.

1. frente -> NULL;
   fin -> NULL;

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
}

2. n = 10;

struct Nodo{
	int dato;
	Nodo *siguiente;
}

nuevo_nodo -> dato = n;
nuevo_nodo -> siguiente = NULL;

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
}

3. 
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin -> sgte = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

*/
