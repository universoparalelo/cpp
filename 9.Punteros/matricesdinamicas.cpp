/* Matrices dinamicas

ejemplo: rellenar una matriz de NxM y mostrar su contenido

**puntero-matriz -> *puntero_fila -> [int] [int]
				 -> *puntero_fila -> [int] [int]
				 -> *puntero_fila -> [int] [int]
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz,filas,columnas;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,filas,columnas);
	
	for(int i=0; i<filas; i++){
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	getch();
	return 0;
}	

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	cout<<"\n";
	
	puntero_matriz = new int*[filas];
	for(int i=0; i<filas; i++){
		puntero_matriz[i] = new int[columnas];
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}

void mostrarMatriz(int **puntero_matriz, int filas, int columnas){
	cout<<"\n\nImprimiendo matriz: \n"<<endl;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
