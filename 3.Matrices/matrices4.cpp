/* 4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarlas de numeros aleatorios,
copiar el contenido a otra matriz y por ultimo mostrarla en pantalla */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas, matriz[filas][columnas];
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"Matriz 1\n";
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"Matriz 2\n";
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz[i][j]= numeros[i][j];
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;	
}
