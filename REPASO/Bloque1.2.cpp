/*Ejercicio 2: Escribir un programa que de la entrada estándar el precio de un 
producto y muestre en la salida estándar el precio del producto al aplicarle 
el IVA	*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float precio,IVA,total;
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	
	IVA = 0.1 * precio;
	total = IVA + precio;
	
	cout<<"El precio total con el IVA es: "<<total<<endl;
	
	getch();
	return 0;
}
