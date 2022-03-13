/* EScribra un programa que pida al usuario una cadena de caracteres,
almacenarla en un arreglo y copiar su contenido a otro arreglo */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	char palabra2[100];
	
	cout<<"EScriba una cadena de caracteres: ";
	cin.getline(palabra, 100, '\n');
	
	strcpy(palabra2, palabra);
	
	cout<<palabra2<<endl;
	
	getch();
	return 0;
}
