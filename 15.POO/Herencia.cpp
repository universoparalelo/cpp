//Herenia en POO

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private://Atributos
		string nombre;
		int edad;
	public://Metodos
		Persona(string,int);//Constructor
		void mostrar();
};

class Alumno : public Persona{
	private://Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Metodos
		Alumno(string,int,string,float);//Constructor de la clase Alumno
		void mostrarAlumno();
};

//Constructor de la clase Persona(Clase Padre)
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno, float _notaFinal): Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Alumno::mostrarAlumno(){
	mostrar();
	cout<<"Codigo alumno: "<<codigoAlumno<<endl;
	cout<<"Nota final: "<<notaFinal<<endl;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

int main(){
	Alumno alumno1("Celeste",18,"758917",9.89);
	
	alumno1.mostrarAlumno(); 
	
	system("pause");
	return 0;
}
