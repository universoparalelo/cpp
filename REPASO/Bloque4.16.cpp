/*16. realice un programa que calcule la descomposicion en factores primos
de un numero entero
por ejemplo: 20 = 2*2*5.	*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero a descomponer: "; cin>>numero;
	cout<<"Descomposicion: ";
	
	do{
		if(numero%2==0){
			numero /= 2;
			cout<<"2*";
		}
		else if(numero%3==0){
			numero /= 3;
			cout<<"3*";
		}
		else if(numero%5==0){
			numero /= 5;
			cout<<"5*";
		}
		else if(numero%7==0){
			numero /= 7;
			cout<<"7*";
		}
		else if(numero%numero==0){
			cout<<numero<<"*";
			numero /= numero;
		}
	}while(numero!=1);
	
	
	getch();
	return 0;
}
