/* Primero creamos un nodo

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
	Nodo *nodoEliminar;
};

Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

COMENZAMOS LA FUNCION INSERTAR

void insertar(Nodo *&arbol, int n, Nodo *padre){

}

tenermos dos casos:
-El arbol puede esta vacio
	if(arbol==NULL){
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol=nuevo_nodo;
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
	
MOSTRAR LOS ELEMENTOS

1.Definimos la funcion

void mostrarArbol(Nodo *arbol, int contador){
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, cint+1);
		for(int i=0; i<cont; i++){
			cout<<"  ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}

BUSCAR UN NODO EN EL ARBOL

bool busqueda(Nodo *arbol,int n){
	if (arbol == NULL){
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

RECORRIDO DE ARBOLES
RECORRIDO EN PREORDEN (raiz, izquierdo, derecho)
para recorre el arbol binario no vacio en PreOrden, hay que realizar las siguiente operaciones
recursivamente en cada nodo, comenzando con el nodo raiz:

-Visite la raiz
-Atraviese el sub-arbol izquierdo
-Atraviese el sub-arbol derecho

1-Definimos la funcion

void preOrden(Nodo *){
	if(arbol == NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

RECORRIDO INORDEN (izquierdo, raiz, derecho)
para recorrer un arbol binario no vacio en InOrden, hay que realizar las siguientes operaciones
recursivamente en cada nodo:

-Atravise el sub-arbol izquierdo
-Visite la raiz
-Atraviese el sub-arbol derecho

1. Definimos la funcion

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

RECORRIDO EN POSTORDEN(izquierdo, derecho, raiz)
para recorrer un arbol binario no vacio en PostOrden, hay que realizar las siguientes operaciones
recursivamente en cada nodo: 

-Atraviese el sub-arbol-izquierdo
-Atraviese el sub-arbol-derecho
-Visite la raiz

1. Definimos la funcion

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

ELIMINAR UN NODO

Tenemos que saber el padre del nodo a eliminar;
Para ello se agrega un nodo en el struct, y se indica en crearnodo con puntero,
y en insertarNodo con puntero
 
void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar (arbol->der,n);
	}
	else{
		eliminarNodo(arbol);
	}
}

AHORA HAY QUE CREAR OTRA FUNCION PARA SABER SI EL NODO A ELIMINAR ES HOJA,
RAMA O RAIZ

BORRAR UN NODO CON DOS SUBARBOLES HIJOS
derecha y lo mas izquierda posible

void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
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

BORRAR UN NODO CON UN SUBARBOL HIJO
el hijo toma el lugar del padre y se elimina padre

	else if(nodoEliminar->izq){
		
	}
	
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
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

BORRAR UN NODO QUE NO TIENE NINGUN HIJO

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

void destruir(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
*/
