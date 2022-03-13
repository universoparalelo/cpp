#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void comprobacion(int m[][100],int,int);

int m[100][100], nfilas=0, ncol=0;

int main(){
	pedirDatos();
	comprobacion(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de filas: ";
	cin>>nfilas;
	cout<<"Digite la cantidad de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"] : ";
			cin>>m[i][j];
		}
	}
}

void comprobacion(int m[][100], int nfilas, int ncol){
	int cont=0;
	
	if(nfilas == ncol){
		for(int i=0; i<nfilas; i++){
			for(int j=0; j<ncol; j++){
				if(m[i][j]==m[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == nfilas*ncol){
		cout<<"\nLa matriz es simetrica"<<endl;
	}
	else{
		cout<<"\nLa matriz no es simetrica"<<endl;
	}
}
