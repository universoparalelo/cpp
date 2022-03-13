//Correspondencia entre arreglos y punteros

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num[] = {1,2,3,4,5}, *dirNum;
	dirNum = num;
	
	for(int i=0; i<5; i++){
		cout<<"\nElemento["<<i<<"]: "<<*dirNum<<endl;
		cout<<"Posicion del elemento["<<i<<"]: "<<dirNum++<<endl;
	}
	
	
	getch();
	return 0;
}
