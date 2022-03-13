//clases en c++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private://Atributos
		int edad;
		string nombre;
	public://Metodos
		Persona(int,string);//Constructor
		void leer();
		void correr();
};

//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy leyendo"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy corriendo"<<endl;
}

int main(){
	Persona p1 = Persona(18,"Celeste");
	Persona p2(13,"Sofia");
	 
	p1.leer();
	p2.correr();
	
	system("pause");
	return 0;
}
