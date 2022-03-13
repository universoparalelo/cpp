//Asignación dinámica de arreglos

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrar();

int numCalif, *calif;

int main(){
	pedirDatos();
	mostrar();
	
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de números: ";
	cin>>numCalif;
	
	calif = new int[numCalif];
	
	for(int i=0; i<numCalif; i++){
		cout<<"Digite un número: ";
		cin>>calif[i];
	}
}

void mostrar(){
	cout<<"\nMostrando notas\n";
	for(int i=0; i<numCalif; i++){
		cout<<calif[i]<<endl;
	}
}
