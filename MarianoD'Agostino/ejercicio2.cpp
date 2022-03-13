/*leer 5 numeros por teclado, determinar su promedio*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float n, suma=0, promedio;
	
	for(int i=0; i<5; i++){
		cout<<"Digite un numero: "; cin>>n;
		suma += n;
	}
	promedio = suma / 5;
	
	cout<<"\nEl promedio es: "<<promedio<<endl;
	
	getch();
	return 0;
}
