//Ordenamiento por Insercion

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={2,3,5,4,1};
	int i, pos, aux;
	
	for(i=0; i<5; i++){
		pos = i;
		aux = numeros[i];
		
		while((pos>0)&&(numeros[pos-1]>aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	cout<<"Orden ascendente\n";
	
	for(i=0;i<5;i++){
		cout<<numeros[i];
	}
	
	cout<<"\nOrden descendente"<<endl;
	
	for(i=4;i>=0;i--){
		cout<<numeros[i];
	}
	
	getch();
	return 0;
}
