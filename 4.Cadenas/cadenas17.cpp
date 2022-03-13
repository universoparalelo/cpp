#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[100], cad2[100];
	int numeros;
	float numeros2, suma;
	
	cout<<"Digite un numero entero: ";
	cin.getline(cad, 100, '\n');
	cout<<"Digite un numero decimal: ";
	cin.getline(cad2, 100, '\n');
	
	numeros = atoi(cad);
	numeros2 = atof(cad2);
	
	suma = numeros + numeros2;
	
	cout<<"Total: "<<suma<<endl;
	
	getch();
	return 0;
}
