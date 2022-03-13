/*Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o 
negativo.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n;
	
	cout<<"Digite un numero: "; cin>>n;
	
	if(n>0){
		cout<<"El numero digitado es POSITIVO"<<endl;
	}
	else if(n==0){
		cout<<"El numero es cero"<<endl;
	}
	else{
		cout<<"El numero digitado es NEGATIVO"<<endl;
	}
	
	getch();
	return 0;
}
