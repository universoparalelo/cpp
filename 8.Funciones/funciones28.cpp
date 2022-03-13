//Ejercicio 20: Realice una función recursiva para la serie Fibonacci

#include<iostream>
#include<conio.h>
using namespace std;

void fibonacci(int);

int main(){
	int numeros;
	
	cout<<"Digite la cantidad de elementos a ver: ";
	cin>>numeros;
	
	fibonacci(numeros);
	
	getch();
	return 0;
}

void fibonacci(int n){
	int x=0, y=0, z=1;
	
	cout<<1<<" ";
	
	for(int i=0; i<n-1; i++){
		x = z + y;
		cout<<x<<" ";
		y = z;
		z = x;
	}
}
