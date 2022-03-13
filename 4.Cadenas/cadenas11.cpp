//hacer un programa que diga si una palabra es polindroma

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[100], cad2[100];
	
	cout<<"Escriba algo: ";
	cin.getline(cad, 100, '\n');
	
	strcpy(cad2, cad);
	
	strrev(cad2);
	
	if(strcmp(cad2, cad)==0){
		cout<<cad<<" es una palabra polindroma"<<endl;
	}
	else{
		cout<<cad<<" no es una palabra polindroma";
	}
	
	getch();
	return 0;
}
