//Paso de parámetros por referencia

#include<iostream>
#include<conio.h>
using namespace std;

void valNuevo(int&, int&);

int main(){
	int num1,num2;
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	valNuevo(num1,num2);
	
	cout<<"El nuevo valor del primero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo es: "<<num2<<endl;
	
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum){
	cout<<"El primer numero es: "<<xnum<<endl;
	cout<<"El segundo numero es: "<<ynum<<endl;
	
	xnum = 89;
	ynum = 13;
}
