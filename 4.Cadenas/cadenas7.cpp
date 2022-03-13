/* pedir al usuario que digite dos cadenas de caracteres e indicar si ambas cadenas son iguales,
en caso de no serlo mostrar cual es la mayor alfabeticamente */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char p1[100], p2[100];
	
	cout<<"EScriba algo: ";
	cin.getline(p1, 100, '\n');
	
	cout<<"Escriba otra cosa: ";
	cin.getline(p2, 100, '\n');
	
	cout<<"\n";
	
	if(strcmp(p1, p2)==0){
		cout<<"Las cadenas son iguales"<<endl;
	}
	else if(strcmp(p1,p2)!=0){
		if(strcmp(p1,p2)>0){
			cout<<p1<<" es mayor alfabeticamente"<<endl;
		}
		else{
			cout<<p2<<" es mayor alfabeticamente"<<endl;
		}
	}
	
	getch();
	return 0;
}
