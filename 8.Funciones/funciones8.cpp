/* Ejercicio 6: Escriba una plantilla de funci�n llamada maximo() que devuelva el valor m�ximo 
de tres argumentos que se transmitan a la funci�n cuando sea llamada. Suponga que los tres argumentos 
ser�n del mismo tipo de datos. */

#include<iostream>
#include<conio.h>
using namespace std;

int maximo(int a, int b, int c);

int main(){
	int a = 12;
	int b = 11;
	int c = 10;
	
	maximo(a,b,c);
	
	cout<<"El mayor es: "<<maximo(a,b,c)<<endl;
		
	getch();
	return 0;
}

int maximo(int a, int b, int c){
		if((a>b)&&(a>c)){
			return a;
		}
		else if((b>a)&&(b>c)){
			return b;
		}
		else if((c>a)&&(c>b)){
			return c;
		}
}
