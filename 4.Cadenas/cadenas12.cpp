//usando la funcion strupr() para cambiar a mayuscula todos los caracteres de una cadena

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[]= "celeste";
	
	strupr(cad);
	
	cout<<cad<<endl;
	
	getch();
	return 0;
}
