//Devolver valores múltiples

#include<iostream>
#include<conio.h>
using namespace std;

void calcular(int,int,int&,int&);

int main(){
	int num1, num2, suma=0, producto=0;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	calcular(num1,num2,suma,producto);
	
	cout<<"La suma es igual a: "<<suma<<endl;
	cout<<"El producto es igual a: "<<producto<<endl;
	
	getch();
	return 0;
}

void calcular(int num1, int num2, int& suma, int& producto){
	suma = num1 + num2;
	producto = num1 * num2;
}
