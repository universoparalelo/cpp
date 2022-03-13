/*3. Escribe un programa que lea de la entrada estandar un vector de numeros
y muestre en la salida estandar los numeros del vector con sus indices
asociados. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Digite la cantidad de elementos del vector: "; 
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	cout<<"\n";
	
	for(int i=0; i<n; i++){
		cout<<"Elemento["<<i<<"]: "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
