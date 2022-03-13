/*Ejercicio 2: Escriba un programa que lea tres números y determine cuál de 
ellos es el mayor. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x,y,z;
	
	cout<<"Digite tres numeros: "; 
	cin>>x>>y>>z;
	
	if(x>y && x>z){
		cout<<"El mayor es: "<<x<<endl;
	}
	else if(y>x && y>z){
		cout<<"El mayor es: "<<y<<endl;
	}
	else{
		cout<<"El mayor es: "<<z<<endl;
	}
	
	getch();
	return 0;
}
