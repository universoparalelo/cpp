//Punteros *n = la variable de una direccion almacenada    &n = la direccion de n

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dirNum;
	
	num = 20;
	dirNum = &num;
	
	cout<<"Numero: "<<*dirNum<<endl;
	cout<<"Direccion: "<<dirNum<<endl;
	
	getch();
	return 0;
}
