/*Ejercicio 4: crear un programa en C++ que tengo la siguiente jerarquia de clases 
y hacer polimorfismo con el metodo comer(). */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal{
	private:
		int edad;
	public:
		Animal(int);
		virtual void comer();
};

Animal::Animal(int _edad){
	edad = _edad;
}

void Animal::comer(){
	cout<<"Yo como ";
}

class Humano : public Animal{
	private:
		string nombre;
	public:
		Humano(int,string);
		void comer();
};

Humano::Humano(int _edad,string _nombre) : Animal(_edad){
	nombre = _nombre;
}

void Humano::comer(){
	Animal::comer();
	cout<<"en la mesa, sentado"<<endl;
}

class Perro : public Animal{
	private:
		string nombre,raza;
	public:
		Perro(int,string,string);
		void comer();
};

Perro::Perro(int _edad,string _nombre,string _raza) : Animal(_edad){
	nombre = _nombre;
	raza = _raza;
}

void Perro::comer(){
	Animal::comer();
	cout<<"en el suelo, con mi plato"<<endl;
}

int main(){
	Animal *vector[3];
	
	vector[0] = new Humano(67,"Nestor");
	vector[0]->comer();
	cout<<"\n";
	
	vector[1] = new Perro(10,"Flor","caniche");
	vector[1]->comer();
	cout<<"\n";
	
	system("pause");
	return 0;
}
