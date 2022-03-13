/*pedir el nombre al usuario convertir a minuscula solo si su nombre comienza con a en caso
contrario no hacerlo */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[20];
	
	char cad3[]="AZ";
	
	cout<<"Escriba su nombr en mayusculas: ";
	cin.getline(cad, 20, '\n');
		
	if(strcmp(cad, cad3)<0){
		strlwr(cad);
		cout<<cad<<endl;
	}
	else{
		cout<<"El nombre no comienza por A"<<endl;
	}
	
	getch();
	return 0;
}
