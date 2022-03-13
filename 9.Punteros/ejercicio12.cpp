/*ejercicio 12: defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa.
la estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado 3 etapas calucla
el tiempo total empleado en correr todas las etapas. NOta: usar punteros. */

#include<iostream>
#include<conio.h>
using namespace std;

struct Tiempo{
	int hora;
	int minutos;
	int segundos;
}etapa[100], *ciclista = etapa;

void pedirDatos();
void calculo(Tiempo *);

int n;

int main(){
	pedirDatos();
	calculo(ciclista);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de etapas: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"\nEtapa "<<i+1<<endl;
		cout<<"Hora: "; cin>>(ciclista+i)->hora;
		cout<<"Minutos: "; cin>>(ciclista+i)->minutos;
		cout<<"Segundos: "; cin>>(ciclista+i)->segundos;
	}
}

void calculo(Tiempo *ciclista){
	int horas_total=0, minutos_total=0, segundos_total=0;
	
	for(int i=0; i<n; i++){
		horas_total += (ciclista+i)->hora;
		minutos_total += (ciclista+i)->minutos;
		if(minutos_total>60){
			minutos_total -= 60;
			horas_total++;
		}
		segundos_total += (ciclista+i)->segundos;
		if(segundos_total>60){
			segundos_total -= 60;
			minutos_total++;
		}	
	}
	cout<<"\nTiempo empleado en todo el circuito: "<<endl;
	cout<<"Hora: "<<horas_total<<endl;
	cout<<"Minutos: "<<minutos_total<<endl;
	cout<<"Segundos: "<<segundos_total<<endl;
}






