//1.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}c1;

int main(){
	char categoria[20];
	
	cout<<"Nombre: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: ";
	cin.getline(c1.sexo,20,'\n');
	cout<<"Club: ";
	cin.getline(c1.club,20,'\n');
	
	if(c1.edad<=18){
		strcpy(categoria,"Juvenil");
	}
	
	else if((c1.edad>18)&&(c1.edad<=40)){
		strcpy(categoria,"Senior");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	
	//imprimiendo datos
	
	cout<<"\nNombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	getch();
	return 0;
}
