/* 5. Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. la matriz transpuesta es aquella en la
 cual la columna i era la fila i de la matriz original */
 
 #include<iostream>
 #include<conio.h>
 
 using namespace std;
 
 int main(){
 	int numeros[3][3];
 	
 	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero: ";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
 }
