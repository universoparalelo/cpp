/*Ejercicio 12: Realice una función que tome como parámetros un vector y su tamaño y  diga si el vector está 
ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el 
elemento del vector es mayor o igual que el elemento que le precede en el vector. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void ordenado(int,int);

int n1, n2;

int main(){
	pedirDatos();
	ordenado(n1,n2);	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros cualesquiera: ";
	cin>>n1>>n2;
}

void ordenado(int n1, int n2){
	if(n1<n2){
		cout<<"\nEl vector esta ordenado crecientemente"<<endl;
	}
	else{
		cout<<"\nEl vector no esta ordenado crecientemente"<<endl;
	}
}
