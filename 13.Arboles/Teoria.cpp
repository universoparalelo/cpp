/* ARBOLES

un arbol consta de un comjunto finito de elementos, denominados nodo y un conjunto finito de lineas
digirigidas, denominadas ramas, que conectan los nodos

raiz->nodo hijo->nodo hijo->hojas

Como definir un nodo: necesitamos un nodo que apunte a otros nodos.

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
}

Propiedades del Arbol
-longitud de camino: es la cantidad de ramas a atravesar para llegar al nodo querido
-altura de un nodo: desde las hojas para arriba, como si fuesen niveles
-profundidad de un nodo: Nivel, de la raiz para abajo

Nodos hermanos: deben estar al mismo nivel y compartir el mismo padre o rama

Orden: la maxima cantidad de hijos que puede tener una rama de un arbol
*/

/* concepto de Arbol Binario: un arbol binario es un arbol de orden 2. Se conoco el nodo de la 
izquierda como hijo izquierdo y el nodo de la derecha como hijo derecho.

Un arbol binario es una estructura recursiva. Un arbol binario se divide en tres subconjuntos
disjuntos:
-Nodo raiz
-Subárbol izquierda
-Subárbol derecho

TIPOD DE ARBOLES BINARIOS

ARBOL LLENO: todos sus ramas tiene dos hijos
ARBOL COMPLETO: no todas las ramas tienen dos hijos, tiene dos o ninguno, los niveles no tienen la misma cantidad
ARBOL DEGENERADO: saca hijos por una rama, desordenado

ESTRUCTURA

struct;
*/

/* QUE ES UN ARBOL BINARIO DE BUSQUEDA

es aquel que dado un nodo, todos los datos del subarbol izquierdo son menores, mientras que todos los datos
del subarbol derecho son mayores.

Operaciones:
-Insertar un nodo en el arbol
-Mostrar el arbol completo
-Buscar un nodo especifico
-Recorrer el arbol
-Borrar un nodo del arbol
*/
