/*ejercicio 2: construya una clase Tiempo que contenga los siguientes atributos enteros:
horas,minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener
parametros Tiempo(int, int, int) y el segundo solo tendra un campo que seran los segundos
y desensamble el numero entero largo en horas, minutos y segundos. */

#include<iostream>
#include<conio.h>
using namespace std;

class Tiempo{
	private:
		int horas=0,minutos=0,segundos=0;
	public:
		Tiempo(int,int,int);
		Tiempo(int);
		void mostrar();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tiempo::Tiempo(int _segundos){
	horas = _segundos / 3600;
	_segundos %= 3600;
	minutos = _segundos / 60;
	segundos = _segundos % 60;
}

void Tiempo::mostrar(){
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;
	cout<<"\n";
}

int main(){
	Tiempo t1(3,34,23);
	Tiempo t2(3667);
	
	t1.mostrar();
	t2.mostrar();
	
	system("pause");
	return 0;
}
