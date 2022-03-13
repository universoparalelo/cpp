/*listas enlazadas

Una lista enlazada consta de un numero de nodos con dos componentes (campos), un enlace al siguiente nodo
de la lista y un valor, que puede ser de cualquier tipo.

struct Nodo{
	int dato;
	Nodo *siguiente;
};

Clasificacion de Listas Enlazadas:

Las listas se puede dividir en cuatro categorias: 

1. Listas Simplemente Enlazadas
2. Listas Doblemente Enlazadas
3. listas Circular Simplemente Enlazada
4. Lista Circular Doblemente Enlazada

1. Listas Simplemente Enlazadas
Cada nodo contiene un unico enlace que conecta ese nodo al nodo siguiente o nodo sucesar. 
la lista es eficiente en recorridos directos

2. Listas Doblemente Enlazadas
Cada nodo contiene dos enlaces, uno a su nodo predecesor y el otro nodo sucesor. La lista
es eficiente tanto en recorrido directo como en su recorrido inverso.

3. Listas Circulares Simplemente Enlazadas
En la que el ultimo elemento(cola) se enlaza al primer elemento(cabeza) de tal modo que la lista
puede ser recorrida de modo circular

4. Lista Circular Doblemente Enlazada
En la que el ultimo elemento se enlaza al primer elemento y viceversa. Esta lista se puede recorrer
de modo circular tanto en direccion directa como i nversa.

Operaciones en Listas Enlazadas
.Insertar elementos en una lista enlazada
.Mostrar los elementos de una lista enlazada
.Buscar un elemento en una lista enlazada
.Eliminar un elemento en una lista enlazada */

