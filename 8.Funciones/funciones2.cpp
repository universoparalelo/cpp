//ejemplo de una Plantilla de funcion

#include<iostream>
#include<conio.h>

using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int num1 = -4;
	float num2 = -34.56;
	double num3 = -126.7896;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero *= -1;
	}
	
	cout<<"El numero absoluto es: "<<numero<<endl;
}
