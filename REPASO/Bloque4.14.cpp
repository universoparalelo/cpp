/*14. En una clase de 5 alumnos se han realizado tres examenes se requiere
determinar el numero de:
a) Alumnos que aprobaron todos los examenes
b) Alumnos que aprobaron al menos un examen
c) Alumnos que aprobaron unicamente el ultimo examen
Realice un programa que permita la lectrua de los datos y calculo de las 
estadisticas  */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int contA=0, contU=0, contUU=0, nota1, nota2, nota3;
	
	for(int i=0; i<5; i++){
		cout<<"Alumno "<<i+1<<endl;
		cout<<"Examen 1: "; cin>>nota1;
		cout<<"Examen 2: "; cin>>nota2;
		cout<<"Examen 3: "; cin>>nota3;
		
		if((nota1>5)&&(nota2>5)&&(nota3>5)){
			contA++;
		}
		else if((nota1<5)&&(nota2<5)&&(nota3>5)){
			contUU++;
			contU++;
		}
		else if((nota1<5)&&(nota2>5)&&(nota3<5)){
			contU++;
		}
		else if((nota1>5)&&(nota2<5)&&(nota3<5)){
			contU++;
		}
	}
	
	cout<<"Alumnos que aprobaron todos los examenes: "<<contA<<endl;
	cout<<"Alumnos que aprobaron al menos un examen: "<<contU<<endl;
	cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<contUU<<endl;
	
	
	
	getch();
	return 0;
}
