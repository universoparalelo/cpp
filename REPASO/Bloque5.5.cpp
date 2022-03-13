/*5. Desarrolle un programa que lea la entrada estandar un vector de enteros
y determine el mayor elemento del vector. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[10],n,mayor=0;
	
	cout<<"Digite la cantidad de elementos: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>numeros[i];
	}
	
	for(int i=0; i<n; i++){
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<"\nEl numero mayor del vector es: "<<mayor<<endl;
	
	getch();
	return 0;
}
