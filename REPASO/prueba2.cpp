//escriba un programa que calcule el valor de 1*2*3*...*n; 

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, total=1;
	
	cout<<"Digite la cantidad de numeros a multiplicar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		total*=i;
	}
	
	cout<<"\nEl resultado es: "<<total;
	
	getch();
	return 0;
}
