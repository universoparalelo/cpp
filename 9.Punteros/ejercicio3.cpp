//Ejercicio 3: Rellenar un array de 10 n�meros, posteriormente utilizando punteros indicar cuales son n�meros pares y su posici�n en memoria.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num[10], *dirNum;
	
	for(int i=0; i<10; i++){
		cout<<"Digite un numero: ";
		cin>>num[i];
	}
	
	dirNum = num;
	
	for(int i=0; i<10; i++){
		cout<<"\nElemento["<<i<<"]: "<<*dirNum<<endl;
		if(*dirNum%2==0){
			cout<<"Es par"<<endl;
		}
		cout<<"Posicion: "<<dirNum<<endl;
		dirNum++;
	}
	
	getch();
	return 0;
}
