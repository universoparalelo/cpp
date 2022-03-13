/*ejercicio 1: realice un programa que pida al usuario el nombre de un fichero de texto,
y a continuacion permita almacenar al usuario tantas frases como el usuario desee.
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombre,frase;
	char rta;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombre);
	
	archivo.open(nombre.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite una frase: ";
		getline(cin,frase);
		archivo<<frase<<endl;
		
		cout<<"Desea agregar mas texto?(s/n): ";
		cin>>rta;
	}while((rta=='s')||(rta=='S'));
	
	archivo.close();
}
