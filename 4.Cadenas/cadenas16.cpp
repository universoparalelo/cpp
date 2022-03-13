//usando las funciones atof() y atoi()

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[]= "123";
	char cad2[]= "1.23";
	int numeros;
	float numeros2;
	
	numeros = atoi(cad);
	numeros2 = atof(cad2);
	
	cout<<numeros<<endl;
	cout<<numeros2<<endl;
	
	getch();
	return 0;
}
