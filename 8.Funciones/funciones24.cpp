//Ejercicio 17: Suma de números Complejos

#include<iostream>
#include<conio.h>
using namespace std;

struct Complejo{
	float real, imaginario;
}z1,z2;

void pedirDatos();
Complejo suma(Complejo,Complejo);
void mostrar(Complejo);

int main(){
	pedirDatos();
	
	Complejo x = suma(z1,z2);
	
	mostrar(x);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Primer conjunto"<<endl;
	cout<<"Digite la parte real: ";
	cin>>z1.real;
	cout<<"Digite la parte imaginaria: ";
	cin>>z1.imaginario;
	
	cout<<"\nSegundo conjunto"<<endl;
	cout<<"Digite la parte real: ";
	cin>>z2.real;
	cout<<"Digite la parte imaginaria: ";
	cin>>z2.imaginario;
}

Complejo suma(Complejo z1, Complejo z2){
	z1.real += z2.real;
	z1.imaginario += z2.imaginario;
	
	return z1;
}

void mostrar (Complejo x){
	cout<<"\nEl resultado de la suma es: "<<x.real<<" , "<<x.imaginario<<endl;
}
