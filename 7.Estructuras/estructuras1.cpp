//Estructura basica en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[30];
	int edad;
}persona1,persona2;

int main(){
	cout<<"Alumno 1"<<endl;
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,30,'\n');
	
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	fflush(stdin);
	
	cout<<"Alumno 2"<<endl;
	
	cout<<"Nombre: ";
	cin.getline(persona2.nombre,30,'\n');
	
	cout<<"Edad: ";
	cin>>persona2.edad;
	
	cout<<"\nImprimiendo datos\n";
	cout<<"\nAlumno 1"<<endl;
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	cout<<"\nAlumno 2"<<endl;
	cout<<"Nombre: "<<persona2.nombre<<endl;
	cout<<"Edad: "<<persona2.edad<<endl;
	
	getch;
	return 0;
}
