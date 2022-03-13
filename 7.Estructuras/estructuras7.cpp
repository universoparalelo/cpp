//5. 

#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char genero[20];
	int edad;
	struct Promedio prom;
}a1;

int main(){
	float promedio_a1;
	
	cout<<"Nombre del alumno: ";
	cin.getline(a1.nombre,20,'\n');
	cout<<"Genero: ";
	cin.getline(a1.genero,20,'\n');
	cout<<"Edad: "; cin>>a1.edad;
	
	cout<<"Nota1: ";
	cin>>a1.prom.nota1;
	cout<<"Nota2: ";
	cin>>a1.prom.nota2;
	cout<<"Nota3: ";
	cin>>a1.prom.nota3;
	
	promedio_a1 = (a1.prom.nota1+a1.prom.nota2+a1.prom.nota3)/3;
	
	cout<<"Nombre: "<<a1.nombre<<endl;
	cout<<"Genero: "<<a1.genero<<endl;
	cout<<"Edad: "<<a1.edad<<endl;
	cout<<"Promedio: "<<promedio_a1<<endl;
	
	getch();
	return 0;
}
