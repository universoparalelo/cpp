 //Punteros a estructuras
 
#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona, *puntero_estructura=&persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	pedirDatos();
	mostrarDatos(puntero_estructura);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(puntero_estructura->nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>puntero_estructura->edad;
}

void mostrarDatos(Persona *puntero_estructura){
	cout<<"\nImprimiendo datos...\n";
	cout<<"\nNombre: "<<puntero_estructura->nombre<<endl;
	cout<<"Edad: "<<puntero_estructura->edad<<endl;
}
