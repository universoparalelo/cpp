//A�adir texto al final de un archivo

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

//Funcion para a�adir texto 
void agregar(){
	ofstream archivo;
	string texto;
	
	archivo.open("prueba.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto que quiere a�adir: ";
	getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close();
}
