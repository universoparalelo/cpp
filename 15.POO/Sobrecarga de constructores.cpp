//Sobrecargo de constructores

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
	private: //Atributos
		int dia,mes,year;
	public: //Metodos
		Fecha(int,int,int);//Constructor1
		Fecha(long);//Constructor2
		void mostrar();
};

Fecha::Fecha(int _dia,int _mes,int _year){
	dia = _dia;
	mes = _mes;
	year = _year;
}

Fecha::Fecha(long fecha){
	year = int(fecha/10000);
	mes = int((fecha-year*10000)/100);
	dia = int(fecha-year*10000-mes*100);
}

void Fecha::mostrar(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<year<<endl;
}

int main(){
	Fecha f1(22,9,2002);
	Fecha f2(20051110);
	
	f1.mostrar();
	f2.mostrar();
	
	system("pause");
	return 0;
}
