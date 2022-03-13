/*11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include<iostream>
#include<conio.h>
using namespace std;
//si las miradas mataran la tuya me hizo el amor
int main(){
	int n=1000,n1,n2,n3;
	
	do{
		cout<<"\t::Bienvenido al cajero automatico::"<<endl;
	cout<<"1.Agregar dinero"<<endl;
	cout<<"2.Retirar dinero"<<endl;
	cout<<"3.Ver saldo"<<endl;
	cout<<"4.Salir"<<endl;
	cout<<"Escoger un numero: ";
	cin>>n3;
	
	switch(n3){
		case 1: cout<<"\nDinero a ingresar: ";
				cin>>n1;
				n += n1;
				break;
		case 2: cout<<"Dinero a retirar: ";
				cin>>n2;
				if(n2>n){
					cout<<"Dinero insuficiente"<<endl;
				}
				n -= n2;
				break;
		case 3: cout<<"\nSaldo: "<<n<<endl;
				break;
				
	}
	system("PAUSE");
	system("cls");
	
	}while(n3<4);

	getch();
	return 0;
}
