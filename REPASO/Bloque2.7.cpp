/* Ejercicio 7: La calificación final de un estudiante es el promedio de tres 
notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que 
cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba 
un programa que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float n1,n2,n3;
	float prom1,prom2,prom3;
	float total=0;
	
	cout<<"Digite tres notas: ";
	cin>>n1>>n2>>n3;
	
	prom1 = 0.3 * n1;
	prom2 = 0.6 * n2;
	prom3 = 0.1 * n3;
	
	total = prom1 + prom2 + prom3;
	
	cout<<"\nLa nota final es: "<<total<<endl;
	
	getch();
	return 0;
}
