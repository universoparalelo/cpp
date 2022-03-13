/*Ejercicio 6: Escriba un programa que lea las tres notas de un alumno y 
calcule la nota final media de dicho alumno.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float n1,n2,n3,nMedia=0;
	
	cout<<"Nota 1: "; cin>>n1;
	cout<<"Nota 2: "; cin>>n2;
	cout<<"Nota 3: "; cin>>n3;
	
	nMedia = (n1+n2+n3) / 3;
	
	cout<<"Nota media: "<<nMedia<<endl;
	
	getch();
	return 0;
}
