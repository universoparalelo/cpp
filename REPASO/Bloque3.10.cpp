/*ejercicio 10: mostrar los meses del a�o, pidiendole al usuario un numero 
entre 1-12 y mostrar el mes al que corresponde */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero entre 1-12: ";
	cin>>numero;
	cout<<"\n";
	cout<<"El numero corresponde al mes de: ";
	
	switch(numero){
		case 1: cout<<"Enero"; break;
		case 2: cout<<"Febrero"; break;
		case 3: cout<<"Marzo"; break;
		case 4: cout<<"Abril"; break;
		case 5: cout<<"Mayo"; break;
		case 6: cout<<"Junio"; break;
		case 7: cout<<"Julio"; break;
		case 8: cout<<"Agosto"; break;
		case 9: cout<<"Septiembre"; break;
		case 10: cout<<"Octubre"; break;
		case 11: cout<<"Noviembre"; break;
		case 12: cout<<"Diciembre"; break;
	}
	
	
	getch();
	return 0;
}
