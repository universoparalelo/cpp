/*ejercicio  2: Realice un programa que pida al usuario el nombre o ubicacion de
un texto y, a continuacion de lectura a todo el fichero */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	ifstream archivo;
	string texto,ubicacion;
	
	cout<<"Digite la ubicacion del texto a leer: ";
	getline(cin,ubicacion);
	
	archivo.open(ubicacion.c_str(),ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<"\n"<<texto<<endl;
	}
	
	archivo.close();
}
