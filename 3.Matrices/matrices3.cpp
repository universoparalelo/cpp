/* 3. Hacer una matriz de tipo entera de 2x2 llenarla de numeros y luego copiar 
el contenido hacia otra matriz */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[2][2]= {{1,2}, {3,4}}, matriz[2][2];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz[i][j]= numeros[i][j];
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
