//comparar cadenas con strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "hola";
	char palabra2[] = "hola";
	
	if (strcmp(palabra1, palabra2) != 0){
		cout<<"Son diferentes";
	}
	else if (strcmp(palabra1, palabra2)==0){
		cout<<"Son iguales";
	}
	
	getch();
	return 0;
}
