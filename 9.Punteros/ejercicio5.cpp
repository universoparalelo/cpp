//Ordenar un arreglo con punteros

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenamiento(int *, int);
void mostrarVector(int *, int);

int nElementos, *vector;

int main(){
	pedirDatos();
	ordenamiento(vector, nElementos);
	mostrarVector(vector, nElementos);
	
	delete[] vector;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de vectores: ";
	cin>>nElementos;
	
	vector = new int[nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(vector+i);//3,7,6,8,5
	}
}

void ordenamiento(int *vector, int nElementos){
	int aux;
	
	for(int i=0; i<nElementos; i++){
		for(int j=0; j<nElementos-1; j++){
			if(*(vector+j) > *(vector+j+1)){
				aux = *(vector+j);
				*(vector+j) = *(vector+j+1);
				*(vector+j+1) = aux;
			}
		}
	}
}

void mostrarVector(int *vector, int nElementos){
	cout<<"\n\nMostrando arreglo ordenado: ";
	for(int i=0; i<nElementos; i++){
		cout<<*(vector+i)<<" ";
	}
}
