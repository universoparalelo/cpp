//Ejercicio 2: Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria se guardo el número

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dirNum, contador=0;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	dirNum = &num;
	
	for(int i=1; i<*dirNum; i++){
		if(*dirNum%i==0){
			contador++;
		}
	}
	
	if(contador>2){
		cout<<"\nEl numero "<<*dirNum<<" no es primo"<<endl;
		cout<<"Posicion: "<<dirNum<<endl;
	}
	else{
		cout<<"\nEl numero "<<*dirNum<<" es primo"<<endl;
		cout<<"Posicion: "<<dirNum<<endl;
	}
	
	getch();
	return 0;
}
