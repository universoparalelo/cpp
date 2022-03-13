/*convertir dos cadenas a mayusculas y compararlas y decir si son iguales o no */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[100], cad2[100];
	
	cout<<"Escribe algo: ";
	cin.getline(cad, 100, '\n');

    cout<<"Escribe algo: ";
	cin.getline(cad2, 100, '\n');
	
	strupr(cad);
	strupr(cad2);
	
	cout<<cad<<"\t"<<cad2<<endl;
	
	if(strcmp(cad,cad2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else{
		cout<<"Las cadenas son diferentes";
	}
	
	getch();
	return 0;
}
