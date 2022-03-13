/*ejercicio 12: hacer un menu que considere las siguientes opciones:
caso 1: cubo de un numero
caso 2: numero par o impar
caso 3: salir
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int rta,n1,n2;
	
	do{
		cout<<"\t::MENU::"<<endl;
		cout<<"1. Cubo de un numero"<<endl;
		cout<<"2. Numero par o impar"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Escoja una opcion: ";
		cin>>rta;
		
		switch(rta){
			case 1: cout<<"\nDigite un numero: ";
					cin>>n1;
					cout<<"El cubo del numero es: "<<n1*n1*n1<<endl;
					break;
			case 2: cout<<"\nDigite un numero: ";
					cin>>n2;
					if(n2%2==0){
						cout<<"El numero digitado es par"<<endl;
					}
					else{
						cout<<"El numero digitado es impar"<<endl;
					}
					break;
		}
		system("PAUSE");
		system("cls");
	}while(rta<3);
	
	getch();
	return 0;
}
