/*Ejercicio 3: Realice un programa que lea un valor entero y determine si se 
trata de un número par o impar. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x;
	
	cout<<"Digite un numero: ";
	cin>>x;
	
	if(x%2==0){
		cout<<"El numero digitado es PAR"<<endl;
	}
	else{
		cout<<"El numero digitado es IMPAR"<<endl;
	}
	
	getch();
	return 0;
}

