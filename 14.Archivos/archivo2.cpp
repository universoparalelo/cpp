//Leyendo un archivo

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	ifstream archivo;
	string texto;
	
	archivo.open("e:ejer1.txt",ios::in);//abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //cerramos el programa
}
