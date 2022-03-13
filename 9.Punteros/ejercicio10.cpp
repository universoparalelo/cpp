/*Ejercicio 9: realice un programa que lea una matriz dinamica de NxM y cree su matriz transpuesta.
Nota. la matriz trasnpuesta es aquella en la que la columna i era la fila i de la matriz original. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrar(int **,int,int);
void mostrarTrans(int **,int,int);

int **matriz,filas,columnas;

int main(){
	pedirDatos();
	mostrar(matriz,filas,columnas);
	mostrarTrans(matriz,filas,columnas);
	
	for(int i=0;i<filas;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de filas: ";
	cin>>filas;
	cout<<"Digite la cantidad de columnas: ";
	cin>>columnas;
		matriz = new int*[filas];
	for(int i=0; i<filas; i++){
		matriz[i] = new int[columnas];
	}
	cout<<"Digitando la matriz\n";
	for(int i=0; i<filas; i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}

void mostrar(int **matriz,int filas,int columnas){
	cout<<"\nMostrando matriz original\n";
	for(int i=0;i<filas;i++){
		for(int j=0; j<columnas; j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}

void mostrarTrans(int **matriz,int filas,int columnas){
	cout<<"\nMatriz transpuesta\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<*(*(matriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
}
