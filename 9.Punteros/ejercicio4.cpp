//Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, num[100], *dirNum, menor=999;
	
	cout<<"Digite la cantidad de elementos del vector: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>num[i];
	}
	
	dirNum = num;
	
	for(int i=0; i<n; i++){
		if(*dirNum<menor){
			menor = *dirNum;
		}
		dirNum++;
	}
	
	cout<<"\nEl numero menor de los digitados es: "<<menor<<endl;
	
	getch();
	return 0;
}
