/*2. Escribe un programa que defina un vector de numeros y calcule la multi
plicacion acumulada de sus elementos. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int multiplicar[100],n,total=1;
	
	cout<<"Digite la cantidad de elementos a multiplicar: "; 
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>multiplicar[i];
	}
	
	for(int i=0; i<n; i++){
		total *= multiplicar[i];
	}
	
	cout<<"\nTotal: "<<total<<endl;
		
	getch();
	return 0;
}
