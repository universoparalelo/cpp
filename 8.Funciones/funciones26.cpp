// Recursividad - Factorial de un número.

#include<iostream>
#include<conio.h>
using namespace std;

void pedirNumero();
int factorial(int);
void mostrar(int);

int n;

int main(){
	pedirNumero();
	factorial(n);
	mostrar(n);
	
	getch();
	return 0;
}

void pedirNumero(){
	cout<<"Digite un numero: ";
	cin>>n;
}

int factorial(int n){
	if(n == 0){
		n = 1;
	}
	else{
		n = n * factorial(n-1);
	}
	
	return n;
}

void mostrar(int n){
	cout<<"\nEl factorial es: "<<factorial(n)<<endl;
}
