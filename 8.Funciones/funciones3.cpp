/*Ejercicio 1: Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, 
multiplique estos dos números y despliegue el resultado.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void mult(float x, float y);

float num1,num2;

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion;
	
	multiplicacion = num1 * num2;
	
	cout<<"El resultado es: "<<multiplicacion<<endl;
}

