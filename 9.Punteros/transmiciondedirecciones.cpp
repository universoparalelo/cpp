//Transmisión de Direcciones

#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float *, float *);

int main(){
	float num1=3.45, num2=45.67;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"\n\nNuevo valor del Primer Numero: "<<num1<<endl;
	cout<<"Nuevo valor del Segundo Numero: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambio(float *dirNum1, float *dirNum2){
	float aux;
	
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}
