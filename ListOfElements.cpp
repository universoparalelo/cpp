#include<iostream>
#include<stdlib.h>

using namespace std;

struct Elements{
	char NickName[2];
	char Name[15];
};

void Menu(){
	int rta;
	struct Elements hidrogeno,helio,oxigeno;
	
	cout<< "*****BIENVENIDOS******"<<endl;
	cout<<"1. Agregar un elemento."<<endl;
	cout<<"2. Ver lista."<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Escoja un numero: "; cin>>rta;
	
	switch(rta){
		case 1: system("CLS");
		cout<<"**INGRESANDO UN NUEVO ELEMENTO**"<<endl;
				cout<<"Escriba el simbolo del elemento: "; cin>>hidrogeno.NickName;
				cout<<"Escriba el nombre del elemente: "; cin>>hidrogeno.Name;
				break;
		case 2: 
		break;
		case 3: break;
	}
}

int main(){
	Menu();
	
	
	return 0;
}
