//usando strlwr() para convertir los caracteres en minusculas

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[]= "CELESTE";
	
	strlwr(cad);
	
	cout<<cad<<endl;
	
	getch();
	return 0;
}
