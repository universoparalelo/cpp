//4. 

#include<iostream>
#include<conio.h>

using namespace std;

struct Atletas{
	char nombre[30];
	char pais[30];
	int n_medallas;
}atletas[20];

int main(){
	int n, medallas=0, posm;
	
	cout<<"Digite la cantidad de atletas a escribir: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<i+1<<". Nombre: ";
		cin.getline(atletas[i].nombre,30,'\n');
		cout<<i+1<<". Pais: ";
		cin.getline(atletas[i].pais,30,'\n');
		cout<<i+1<<". Numeros de medallas: ";
		cin>>atletas[i].n_medallas;
		
		if(atletas[i].n_medallas > medallas){
			medallas = atletas[i].n_medallas;
			posm = i;
		}
		
		cout<<"\n";
	}
	
	cout<<"El atleta con mas medallas es: "<<endl;
	cout<<"Nombre: "<<atletas[posm].nombre<<endl;
	cout<<"Pais: "<<atletas[posm].pais<<endl;
	
	getch();
	return 0;
}
