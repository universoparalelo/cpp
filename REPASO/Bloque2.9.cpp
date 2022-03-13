/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente 
función para unos valores dados de x e y:
							f(x,y)=(raiz cuandrada de x) / (y al cuadrado - 1)*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	float x,y,total=0;
	
	cout<<"Digite el valor para x: "; cin>>x;
	cout<<"Digite el valor para y: "; cin>>y;
	
	total = (sqrt(x)) / (pow(y,2) - 1);
	
	cout<<"\nTotal: "<<total<<endl;
	
	getch();
	return 0;
}
