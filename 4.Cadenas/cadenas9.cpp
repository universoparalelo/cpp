#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[]="Hola como estas, ";
	char cad2[20];
	char cad3[100];
	
	cout<<"Bienvenido"<<endl;
	
	cout<<"¿Como te llamas? ";
	cin.getline(cad2, 20, '\n');
	
	strcpy(cad3, cad1);
	
	strcat(cad3, cad2);
	
	cout<<cad3<<endl;
	
	getch();
	return 0;
}
