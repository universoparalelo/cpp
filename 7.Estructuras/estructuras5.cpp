//3.

#include<iostream>
#include<conio.h>

using namespace std;

struct Empleados{
	char nombre[30];
	float salario;
}empleado[100];

int main(){
	float  mayor=0, menor=99999;
	int n,posM,posm;
	
	cout<<"Digite la cantidad de empleados: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<i+1<<". Nombre: ";
		cin.getline(empleado[i].nombre,30,'\n');
		cout<<i+1<<". Salario: ";
		cin>>empleado[i].salario;
		
		if(empleado[i].salario > mayor){
			mayor = empleado[i].salario;
			posM = i;
		}
		if(empleado[i].salario < menor){
			menor = empleado[i].salario;
			posm = i;
		}
		
		cout<<"\n";
	}
	
	cout<<"\n.:Datos del empleado con el salario mas alto:."<<endl;
	cout<<"Nombre: "<<empleado[posM].nombre<<endl;
	cout<<"Salario: "<<empleado[posM].salario<<endl;
	cout<<"\n.:Datos del empleado con el salario mas bajo:."<<endl;
	cout<<"Nombre: "<<empleado[posm].nombre<<endl;
	cout<<"Salario: "<<empleado[posm].salario<<endl;
	
	getch();
	return 0;
}
