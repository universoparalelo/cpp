//6. 

#include<iostream>
#include<conio.h>

using namespace std;

struct Notas{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumnos{
	char nombre[20];
	char genero[20];
	int edad;
	struct Notas nota;
}alum[10];

int main(){
	int n, posP;
	float promedio[10], mayor;
	
	cout<<"Digite la cantidad de alumnos: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<i+1<<". Nombre: ";
		cin.getline(alum[i].nombre,20,'\n');
		cout<<"Genero: ";
		cin.getline(alum[i].genero,20,'\n');
		cout<<"Edad: ";
		cin>>alum[i].edad;
		cout<<"Nota1: ";
		cin>>alum[i].nota.nota1;
		cout<<"Nota2: ";
		cin>>alum[i].nota.nota2;
		cout<<"Nota3: ";
		cin>>alum[i].nota.nota3;
		
		promedio[i] = (alum[i].nota.nota1+alum[i].nota.nota2+alum[i].nota.nota3)/3;
		
		if(promedio[i] > mayor){
			mayor = promedio[i];
			posP = i;
		}
		
		cout<<"\n";
	}
	
	cout<<".:El alumno con el mejor promedio:."<<endl;
	cout<<"Nombre: "<<alum[posP].nombre<<endl;
	cout<<"Genero: "<<alum[posP].genero<<endl;
	cout<<"Edad: "<<alum[posP].edad<<endl;
	cout<<"Promedio: "<<promedio[posP]<<endl;
	
	getch();
	return 0;
}
