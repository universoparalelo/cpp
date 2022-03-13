//longitud de una cadenas de caracteres con la funcion strlen();

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "hola que tal";
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout<<"La longitud de la palabra es: "<<longitud<<endl;
	
	getch();
	return 0;
}
