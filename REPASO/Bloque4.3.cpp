/*Bloque 4. 3: realice un programa que calcule y muestre en la salida
estandar la suma de los cuadrados de los 10 primeros enteros mayores que
cer */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int potencia=1, suma=0;
	
	for(int i=1; i<=10; i++){
		potencia = i*i;
		suma +=potencia;
		potencia = 1;
		
	}
	
	cout<<"La suma de los cuadrados de los 10 primeros enteros es: "<<suma<<endl;
	
	getch();
	return 0;
}
