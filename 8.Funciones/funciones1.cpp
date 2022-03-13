//Ejemplo encontrar el mayor de 2 numeros

#include<iostream>
#include<conio.h>

using namespace std;

int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	cout<<"El mayor es: "<<encontrarMax(n1, n2)<<endl;
	
	getch();
	return 0;
}

int encontrarMax(int x,int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}
	else{
		numMax = y;
	}
	
	return numMax;
}
