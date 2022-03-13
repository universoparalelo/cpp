#include<iostream>
#include<stdlib.h>

using namespace std;

struct Elements{
	int Natomico;
	char simbolo[5];
	char nombre[15];
};

int main(){
	int CantElem;
	
	cout<<"Elementos a ingresar "; cin>>CantElem;
	system("CLS");
	
	struct Elements elementos[CantElem];
	
	for(int i=0; i<CantElem; i++){
		cout<<"***Agregando elementos***"<<endl;
		cout<<"N° atomico: "; cin>>elementos[i].Natomico;
		cout<<"Simbolo: "; cin>>elementos[i].simbolo;
		cout<<"Nombre: "; cin>>elementos[i].nombre;
		system("CLS");
	}
	
	cout<<"***Mostrando lista de elementos***"<<endl;
	for(int i=0; i<CantElem; i++){
		cout<<elementos[i].Natomico<<" -> "<<elementos[i].simbolo<<" -> "<<elementos[i].nombre<<endl;
	}
	
	return 0;
}
