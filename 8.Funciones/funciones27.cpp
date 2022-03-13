//Recursividad para la suma

#include<iostream>
#include<conio.h>
using namespace std;

int suma(int);

int main(){
	int n_elementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>n_elementos;
	} while(n_elementos<=0);
	
	cout<<"\nEl resultado es: "<<suma(n_elementos)<<endl;
	
	getch();
	return 0;
}

int suma(int n){
	if(n == 1){
		n = 1;
	}
	else{
		n = n + suma(n-1);
	}
	
	return n;
}
