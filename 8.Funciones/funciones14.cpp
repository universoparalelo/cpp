/*Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número 
total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. La función es calcular 
el año, mes y día actual para el número dado de días que se le transmitan. Usando las referencias, la función deberá 
alterar en forma directa los argumentos respectivos en la función que llama. Para este problema suponga que cada año 
tiene 365 días y cada mes tiene 30 días. */

#include<iostream>
#include<conio.h>
using namespace std;

void calc_anos(int, int&, int&, int&);

int main(){
	int dias;
	int ano=2021, mes=1, dia=1;
	
	cout<<"Digite la cantidad de dias: "; cin>>dias;
	
	calc_anos(dias,ano,mes,dia);
	
	cout<<" "<<endl;
	cout<<"Fecha equivalente: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
	
	getch();
	return 0;
}

void calc_anos(int dias, int& ano, int& mes, int& dia){
	while(dias>=365){
		dias -= 365;
		ano ++;
	}
	while(dias>30){
		dias -= 30;
		mes ++;
	}
	while(dias>1){
		dias -= 1;
		dia ++;
	}
}
