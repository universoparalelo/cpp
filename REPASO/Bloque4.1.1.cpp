/*1. Realice un programa que solicite de la entrada estandar un entero del
1 al 10 y muestre en la salida estandar su tabla de multiplicar
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n;
	
	cout<<"Digite un numero entre 1-10: ";
	cin>>n;
	
	cout<<"\nTabla del "<<n<<endl;
	for(int i=1;i<=20;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	
	getch();
	return 0;
}
