//2.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3];

int main(){
	float mayor=0;
	char mejor[30];
	
	
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"Alumno "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(alumno[i].nombre,30,'\n');
		cout<<"Edad: ";
		cin>>alumno[i].edad;
		cout<<"Promedio: ";
		cin>>alumno[i].promedio;
		cout<<"\n";
		
		if(alumno[i].promedio>mayor){
			strcpy(mejor,alumno[i].nombre);
			mayor = alumno[i].promedio;
		}
	}
	
	cout<<"El mejor promedio es del alumno: "<<mejor<<endl;
	
	getch();
	return 0;
}
