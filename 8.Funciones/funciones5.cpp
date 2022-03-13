/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que 
se le transmita a una potencia en número entero positivo y despliegue el resultado. 
El número entero positivo deberá ser el segundo valor transmitido a la función. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void funpot(int base, int potencia);

int num1, num2;

int main(){
	pedirDatos();
	funpot(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la base: ";
	cin>>num1;
	cout<<"Digite la potencia: ";
	cin>>num2;
}

void funpot(int base, int potencia){
	long pot=1;
	
	for(int i=0; i<potencia; i++){
		pot *= base;
	}
	
	cout<<"El resultado es: "<<pot<<endl;
}
