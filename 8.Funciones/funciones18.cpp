/*Ejercicio 13: Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el 
signo de los elementos del vector. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrar(int vec[], int);

int vec[100], tam; 

int main(){
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrar(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamano del vector: ";
	cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<"Digite un numero: ";
		cin>>vec[i]; 
	}
}

void cambiarSigno(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;  
	}
}

void mostrar(int vec[], int tam){
	cout<<" "<<endl;
	cout<<"Mostrando los numeros pero con el signo contrarion"<<endl;
	
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}
