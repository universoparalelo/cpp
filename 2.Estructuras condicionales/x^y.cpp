//programa que calcula x^y sin pow

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevacion=1;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	for(int i=1;i<=y;i++){/*lo que hace el programa es que repite el ciclo hasta que la cantidad de ciclos sea igual a "y"*/
		elevacion *= x;
	}
	
	cout<<"\nEl resultado de la elevacion es: "<<elevacion;
	
	getch();
	return 0;
}
