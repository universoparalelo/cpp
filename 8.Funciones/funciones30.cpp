/*Ejercicio 22: Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva en la salida est�ndar los n�meros del ini al fin. 
Escriba una versi�n que escriba los n�meros en orden ascendente.*/

#include<iostream>
#include<conio.h>
using namespace std;

int escribeNumeros(int,int);

int main(){
	int ini=0,fin=0;
	
	cout<<"Digite el inicio: "; cin>>ini;
	cout<<"Digite el final: "; cin>>fin;
	
	for(int i=ini; i<=fin; i++){
		cout<<escribeNumeros(i,fin)<<" ";
	}
	cout<<endl;
	
	getch();
	return 0;
}

int escribeNumeros(int ini, int fin){
	
	
	if(ini == fin){
		return ini;
	}
	else{
		return escribeNumeros(ini,fin-1);
	}
}
