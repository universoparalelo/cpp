/*Ejercicio 3: Escribe la siguiente expresión como expresión en C++:
3) (a+(b/c))/(d+(e/f)) */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float a,b,c,d,e,f,total=0;
	
	cout<<"Digite seis numeros: ";
	cin>>a>>b>>c>>d>>e>>f;
	
	total = (a+(b/c))/(d+(e/f));
	
	cout<<"Total: "<<total<<endl;
	
	getch();
	return 0;
}
