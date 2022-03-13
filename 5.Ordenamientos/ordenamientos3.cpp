//ordenamiento por seleccion

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[]={5,6,4,3,10,7,8,1,2,9};
	int i, j, aux, min;
	
	for(i=0;i<10;i++){
		min = i;
		for(j=i+1; j<10; j++){
			if(numero[j] < numero[min]){
				min = j;
			}	
		}
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = aux;
	}
	
	cout<<"Orden ascendente\n";
	
	for(i=0;i<10;i++){
		cout<<numero[i]<<" ";
	}
	
	cout<<"\nOrden descendente\n";
	
	for(i=9;i>=0;i--){
		cout<<numero[i]<<" ";
	}
	
	getch();
	return 0;
}
