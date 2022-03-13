/*Ejercicio 10: Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero 
total de d�as desde la fecha 1/1/2000 y par�metros de referencia nombrados a�o, mes y d�a. La funci�n es calcular 
el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan. Usando las referencias, la funci�n deber� 
alterar en forma directa los argumentos respectivos en la funci�n que llama. Para este problema suponga que cada a�o 
tiene 365 d�as y cada mes tiene 30 d�as. */

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
