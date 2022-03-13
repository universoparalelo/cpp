/*Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número entero
 y seis parámetros de referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco 
 y uno, respectivamente. La función tiene que considerar el valor entero transmitido como una 
 cantidad en dólares y convertir el valor en el número menor de billetes equivalentes.*/
 
#include<iostream>
#include<conio.h>
using namespace std;
 
void cambio(int n1, int&, int&, int&, int&, int&, int&);
 
int main(){
	int n1;
	int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	
	cout<<"Digite una cantidad de dinero: "; cin>>n1;
	cout<<"Billetes necesarios para la cantidad de "<<n1<<": "<<endl;
	
	cambio(n1,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<" "<<endl;
	cout<<"Billetes de $100: "<<cien<<endl;
	cout<<"Billetes de $50: "<<cincuenta<<endl;
	cout<<"Billetes de $20: "<<veinte<<endl;
	cout<<"Billetes de $10: "<<diez<<endl;
	cout<<"Billetes de $5: "<<cinco<<endl;
	cout<<"Billetes de $1: "<<uno<<endl;
 	
 	getch();
 	return 0;
}

void cambio(int n1, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	
	while(n1>100){
		n1 -= 100;
		cien ++;
	}
	while(n1>50){
		n1 -= 50;
		cincuenta ++;
	}
	while(n1>20){
		n1 -= 20;
		veinte ++;
	}
	while(n1>10){
		n1 -= 10;
		diez++;
	}
	while(n1>5){
		n1 -= 5;
		cinco ++;
	}
	while(n1>=1){
		n1 -= 1;
		uno ++;
	}
}
