/*Bloque 2: Expresiones y Operadores
Ejercicio 1: Escribe la siguiente expresión como expresión en C++:
1) (a/b)+1 */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float n1,n2,total=0;
	
	cout<<"Digite dos numeros: "; cin>>n1>>n2;
	
	total = (n1/n2)+1;
	
	cout<<"Total: "<<total<<endl;
	
	getch();
	return 0;
}
