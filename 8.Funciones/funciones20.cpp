//Paso de parámetro de tipo matriz

#include<iostream>
#include<conio.h>
using namespace std;

void mostrarMatriz(int m[][3],int,int);
void cuadrado(int m[][3], int, int);
void mostrar(int m[][3], int, int);

int main(){
	const int nfilas=2, ncol=3;
	int m[nfilas][ncol]= {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,nfilas,ncol);
	cuadrado(m,nfilas,ncol);
	mostrar(m,nfilas,ncol);
	
	getch();
	return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<""<<endl;
	}
}

void cuadrado(int m[][3], int nfilas, int ncol){
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrar(int m[][3], int nfilas, int ncol){
	cout<<""<<endl;
	cout<<"Mostrando la matriz elevada al cuadrado"<<endl;
	
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<" "<<endl;
	}
}
