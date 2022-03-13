#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz1[3][3], matriz2[3][3], total[3][3];
	
	cout<<"Primer matriz:"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		   	cout<<"Digite un numero: ";
		   	cin>>matriz1[i][j];
		}
	}
	
	cout<<"Segunda matriz:"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero: ";
			cin>>matriz2[i][j];
		}
	}
	
	cout<<"Matriz 1"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Matriz 2"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Multiplicacion total\n";
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			total[i][j]= matriz1[i][j] * matriz2[i][j];
			cout<<total[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
