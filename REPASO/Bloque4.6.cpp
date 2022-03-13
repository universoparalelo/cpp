/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la funcion pow */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int base,exponente,total=1;
	
	cout<<"Digite el numero a elevar: ";cin>>base;
	cout<<"Digite el exponente: ";cin>>exponente;
	
	for(int i=1;i<=exponente;i++){
		total = base * total;
	}
	
	cout<<"\nEl resultado es: "<<total<<endl;
	
	getch();
	return 0;
}
