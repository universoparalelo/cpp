//Busqueda secuencial en un arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[]= {2,4,5,1,3};
	int i, dato;
	char band= 'F';
	
	dato=6;
	
	i=0;
	while((band == 'F')&&(i<5)){
		if(arreglo[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El dato no se encuentra en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"El dato se encontro en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
