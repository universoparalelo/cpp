//Busqueda binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[] = {1,2,3,4,5};
	int inf, sup, mitad, dato;
	char band='F';
	
	dato = 2;
	
	inf=0;
	sup=5;
	
	while(inf<=sup){
		mitad= (inf+sup)/2;
		if(arreglo[mitad]==dato){
			band ='V';
			break;
		}
		if(arreglo[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(arreglo[mitad]<dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band=='V'){
		cout<<"El dato se encuentra en la posicion "<<mitad<<" del arreglo"<<endl;
	}
	else{
		cout<<"El dato no se encuentra en el arreglo"<<endl;
	}
	
	getch();
	return 0;
}
