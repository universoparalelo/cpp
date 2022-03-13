/* Cadenas de caracteres */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Celeste";
	char palabra2[] = {'C','e','l','e','s','t','e'};
	char nombre[20];
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	cout<<"Escriba su nombre: ";
	cin.getline(nombre, 20, '\n');
	
	cout<<nombre<<endl;
	
	getch();
	return 0;
}
