//Ejercicio 16: Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila.

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void buscandoMenor(int m[][100],int,int);

int m[100][100], nfilas, ncol;

int main(){
	pedirDatos();
	buscandoMenor(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de filas: ";
	cin>>nfilas;
	cout<<"Digite la cantidad de columnas: ";
	cin>>ncol;
	
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void buscandoMenor(int m[][100],int nfilas,int ncol){
	int mayor=0;
	int pos[100];
	
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			if(mayor < m[i][j]){
				mayor = m[i][j];
				pos[i] = mayor;
			}
			else{
			}
		}
		mayor = 0;
	}
	
	for(int i=0;i<nfilas;i++){
		cout<<"\nEl menor de la fila "<<i<<" es : "<<pos[i]<<endl;
	}
	
	
	
}
