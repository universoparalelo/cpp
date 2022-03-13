/*Ejercicio 3: Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y,
a continuacion añada texto en él hasta que el usuario lo decida */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void agregar();

int main(){
	agregar();
	
	system("pause");
	return 0;
}

void agregar(){
	ofstream archivo;
	string texto,ubicacion;
	char rta;
	
	cout<<"Digite la ubicacion de un fichero de texto: ";
	getline(cin,ubicacion);
	
	archivo.open(ubicacion.c_str(),ios::app);
	
	if(archivo.fail()){
		cout<<"\nNo se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite una frase: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"Desea agregar otra frase?(s/n)";
		cin>>rta;
	}while((rta=='s')||(rta=='S'));
	
	archivo.close();
}
