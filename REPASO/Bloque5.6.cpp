/*6. Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en e vector cuyo valor equivale a la suma del resto de numero 
del vector. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[10],n,suma=0,mayor=0;
	
	cout<<"Digite la cantidad de elementos: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
		suma += numeros[i];
	}
	
	if((suma-mayor)==mayor){
		cout<<"\nExiste un numero cuyo valor equivale a la suma del resto"<<endl;
		cout<<"Ese numero es: "<<mayor<<endl;
	}
	else{
		cout<<"\nNo existe un numero cuyo valor equivale a la suma del resto"<<endl;
	}
	
	getch();
	return 0;
}
