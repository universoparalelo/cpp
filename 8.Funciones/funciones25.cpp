/*Ejercicio 18: Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le 
transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha. */

#include<iostream>
#include<conio.h>
using namespace std;

struct fechas{
	int dia, mes, ano;
}f1,f2;

void pedirDatos();
fechas menorMayor(fechas,fechas);
void mostrar(int,int,int);

int a,m,d;

int main(){
	pedirDatos();
	menorMayor(f1,f2);
	mostrar(d,m,a);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Primer fecha"<<endl;
	cout<<"Digite el dia: "; cin>>f1.dia;
	cout<<"Digite el mes: "; cin>>f1.mes;
	cout<<"Digite el ano: "; cin>>f1.ano;
	
	cout<<"\nSegunda fecha"<<endl;
	cout<<"Digite el dia: "; cin>>f2.dia;
	cout<<"Digite el mes: "; cin>>f2.mes;
	cout<<"Digite el ano: "; cin>>f2.ano;
	
}

fechas menorMayor(fechas f1,fechas f2){
	if(f1.ano > f2.ano){
		a = f1.ano;
		m = f1.mes;
		d = f1.dia;
	}
	else if(f1.ano == f2.ano){
		if(f1.mes > f2.mes){
			a = f1.ano;
			m = f1.mes;
			d = f1.dia;
		}
		else if(f1.mes == f2.mes){
			if(f1.dia > f2.dia){
				d = f1.dia;
				m = f1.mes;
				a = f1.ano;
			}
			else{
				d = f2.dia;
				m = f2.mes;
				a = f2.ano;
			}
		}
		else{
			m = f2.mes;
			d = f2.dia;
			a = f2.ano;
		}
	}
	else{
		a = f2.ano;
		d = f2.dia;
		m = f2.mes;
	}
	
	
}

void mostrar(int d, int m, int a){
	cout<<"\nLa fecha mas reciente de las digitadas es: "<<endl;
	cout<<d<<"/"<<m<<"/"<<a<<endl;
}
