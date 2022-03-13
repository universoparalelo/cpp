/* 7. Desarrollar un programa que determine si una matriz es simetrica o no. 
Una matriz es simetrca si es cuadrada y si es igual a su transpuesta */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	char band='F';
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero: "; cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas){
		for(int i=0; i<filas; i++){
		    for(int j=0; j<columnas; j++){
			    if(numeros[j][i]==numeros[i][j]){
			    	band='V';
				}
		}
	  }
	}
	
	if(band=='V'){
		cout<<"La matriz es simetrica"<<endl;
	}
	else{
		cout<<"La matriz no es simetrica"<<endl;
	}
	
	getch();
	return 0;
}
