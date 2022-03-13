//estructuras anidadas en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct info_empleado{
	char direccion[30];
	char ciudad[30];
	char provincia[30];
};

struct empleado{
	char nombre[20];
	struct info_empleado dir_empleado;
	int salario;
}empleado[2];

int main(){
	for(int i=0; i<2; i++){
		fflush(stdin);
		cout<<"Empleado "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"Direccion: ";
		cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
		cout<<"Ciudad: ";
		cin.getline(empleado[i].dir_empleado.ciudad,30,'\n');
		cout<<"Provincia: ";
		cin.getline(empleado[i].dir_empleado.provincia,30,'\n');
		cout<<"Salario: ";
		cin>>empleado[i].salario;
		cout<<"\n";
	}
	
	//imprimiendo datos
	for(int i=0; i<2; i++){
		cout<<"Empleado "<<i+1<<endl;
		cout<<"Nombre: "<<empleado[i].nombre<<endl;
		cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleado[i].salario<<endl;
		cout<<"\n";
	}
	
	getch();
	return 0;
}
