//ejercicio 9: realice un programa que calcule la suma de dos matrices dinamicas

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void matrizOriginal(int **,int **,int,int);
void sumar(int **,int **,int,int);
void mostrarTotal(int **,int, int);

int **Matriz, **Matriz2, filas, columnas;

int main(){
	pedirDatos();
	matrizOriginal(Matriz,Matriz2,filas,columnas);
	sumar(Matriz, Matriz2,filas, columnas);
	mostrarTotal(Matriz,filas,columnas);
	
	for(int i=0; i<filas; i++){
			delete[] Matriz[i];
	}
	delete[] Matriz;
	
	for(int i=0; i<filas; i++){
		delete[] Matriz2[i];
	}
	delete[] Matriz2;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de filas: ";
	cin>>filas;
	cout<<"Digite la cantidad de columnas: ";
	cin>>columnas;
	
	Matriz = new int*[filas];
	for(int i=0; i<filas; i++){
		Matriz[i] = new int[columnas];
	}
	cout<<"\nMatriz 1: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(Matriz+i)+j);
		}
	}
	
	Matriz2 = new int*[filas];
	for(int i=0; i<filas; i++){
		Matriz2[i] = new int[columnas];
	}
	cout<<"\nMatriz 2: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(Matriz2+i)+j);
		}
	}
}

void matrizOriginal(int **Matriz,int **Matriz2, int filas, int columnas){
	cout<<"\nMostrando matrices originales: \n"<<endl;
	cout<<"Matriz 1: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<*(*(Matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nMatriz 2: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<*(*(Matriz2+i)+j)<<" ";
		}
		cout<<"\n";
	}
}

void sumar(int **Matriz,int **Matriz2, int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			Matriz[i][j] = *(*(Matriz+i)+j) + *(*(Matriz2+i)+j);
		}
	}
}

void mostrarTotal(int **Matriz,int filas,int columnas){
	cout<<"\nMatriz total: \n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
}
