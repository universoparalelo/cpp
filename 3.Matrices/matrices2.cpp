/* 2. Realiza un program que defina una matriz de 3*3 y escriba un ciclo para que 
muestre la diagonal principal de la matriz */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	cout<<numeros[0][0]<<endl;
	cout<<"  "<<numeros[1][1]<<endl;
	cout<<"  "<<"  "<<numeros[2][2]<<endl;
	
	getch();
	return 0;
}
