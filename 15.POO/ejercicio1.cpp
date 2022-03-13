/* Ejercicio 1: construya una clase llamada Rectangulo que tenga los siguiente atributos:
largo y ancho, y los siguiente metodos: perimetri() y area() */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{
	private:
		int largo;
		int ancho;
	public:
		Rectangulo(int,int);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(int _largo,int _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro(){
	int per;
	
	per = (2*largo) + (2*ancho);
	
	cout<<"Teniendo en cuenta que el largo es "<<largo<<" metros y el ancho "<<ancho<<" metros:"<<endl;
	cout<<"El perimetro es "<<per<<" metros"<<endl;
}

void Rectangulo::area(){
	int a;
	
	a = largo * ancho;
	
	cout<<"El area es "<<a<<" metros"<<endl;
}

int main(){
	Rectangulo r1(20,10);
	
	r1.perimetro();
	r1.area();
	
	
	system("pause");
	return 0;
}
