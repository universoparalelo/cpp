/*Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier 
n�mero introducido por el usuario. Por ejemplo, si se introduce el n�mero 256.879, 
deber�a desplegarse el n�mero 0.879. */

#include<iostream>
#include<conio.h>
using namespace std;

float frac(float x);

float num1;

int main(){
	frac(num1);
	
	getch();
	return 0;
}

float frac(float x){
	float num3;
	int num2;
	
	cout<<"Digite un numero decimal: ";
	cin>>num1;
	
	num2 = num1;
	
	num3 = num1 - num2;
	
	cout<<"La parte fraccionaria es: "<<num3<<endl;
}
