/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos 
catetos de un triángulo rectángulo y escriba en la salida estándar su 
hipotenusa.*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	float cat1,cat2,hip,hip2;
	
	cout<<"Digite los valores de los catetos: ";
	cin>>cat1>>cat2;
	
	hip = pow(cat1,2) + pow(cat2,2);
	hip2 = sqrt(hip);
	
	cout<<"\nLa hipotenusa es: "<<hip2<<endl;
	
	getch();
	return 0;
}
