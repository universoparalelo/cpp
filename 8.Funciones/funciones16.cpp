//Ejercicio 11: Realice una funci�n que tome como par�metros un vector de n�meros enteros y devuelva la suma de sus elementos.

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

int main(){
	pedirDatos();
	calcularSuma(vec,tam);
	
	cout<<"La suma total es: "<<calcularSuma(vec,tam)<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tama�o del vector: ";
	cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite un n�mero: ";
		cin>>vec[i];
	}
}

int calcularSuma(int vec[], int tam){
	int suma=0;
	
	for(int i=0; i<tam; i++){
		suma += vec[i];
	}
	
	return suma;
}
