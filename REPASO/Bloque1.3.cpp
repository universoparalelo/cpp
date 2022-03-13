/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes
datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	string nombre,sexo;
	int edad;
	float altura;
	
	cout<<"Digite su nombre: "; cin>>nombre;
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	system("cls");

	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	
	getch();
	return 0;
}
