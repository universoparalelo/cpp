/*Ejercicio 2: Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del valor 
que se le transmite y despliegue el resultado. La funci�n deber� ser capaz de elevar al 
cuadrado n�meros flotantes. */

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

template <class TIPOD>
void al_cuadrado(TIPOD numero);

int main(){
	float num1;
		
	cout<<"Digite un numero: ";
	cin>>num1;
	
	al_cuadrado(num1);
	
	getch();
	return 0;
}

template <class TIPOD>
void al_cuadrado(TIPOD numero){
	numero = numero * numero;
	
	cout<<"\nEl cuadrado del numero digitado es: "<<numero<<endl;
}
