/*ejercicio 6: hacer una funcion para almacenar N numeros en un arreglo dinamico, posteriormente en otra función buscar un número en particular. 
Nota: puedes utilizar cualquier método de búsqueda(secuencial o binaria)*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void busqueda(int *, int);

int *vector, nElementos;

int main(){
	pedirDatos();
	busqueda(vector,nElementos);
	
	delete[] vector;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	vector = new int [nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout<<"\nDigite un numero["<<i<<"]: ";
		cin>>*(vector+i);
	}
}

void busqueda(int *vector, int nElementos){
	int cont=0;
	
	for(int i=0; i<nElementos; i++){
		if(*(vector+i)==4){
			cont++;
		}
	}
	if(cont==1){
		cout<<"\nEl arreglo contiene un 4";
	}
	else{
		cout<<"\nEl arreglo no contiene un 4";
	}
}
