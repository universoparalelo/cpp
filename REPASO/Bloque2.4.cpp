/*Ejercicio 4: Escribe la siguiente expresión como expresión en C++:
4) a+(b/(c-d)) */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float a,b,c,d,total=0;
	
	cout<<"Digite cuatro numeros: ";
	cin>>a>>b>>c>>d;
	
	total = a + ( b / ( c - d ) );
	
	cout<<"Total: "<<total<<endl;
	
	getch();
	return 0;
}
