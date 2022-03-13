/*ejercicio 1: leer dos numeros por teclado, determinar cual de ellos es el mayor*/

#include<iostream>
#include<conio.h>
using namespace std;

void menu();

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int rta, n1, n2, cont1=0, cont2=0;
	
	do{
		cout<<"\t::MENU::"<<endl;
	cout<<"1. Empezar el juego"<<endl;
	cout<<"2. Salir del juego"<<endl;
	cout<<"Elegir una opcion: "; cin>>rta;
	
	switch(rta){
		case 1: 
			cout<<"Jugador 1: "; cin>>n1;
			cout<<"Jugador 2: "; cin>>n2;
			cout<<"\n";
			
			if(n1>n2){
				cout<<"Jugador 1 gana esta ronda"<<endl;
				cont1++;
			}
			else if(n2>n1){
				cout<<"Jugador 2 gana esta ronda"<<endl;
				cont2++;
			}
			else{
				cout<<"Son iguales, perdieron ambos"<<endl;
			}
			break;
	}
	system("PAUSE");
	system("cls");
	}while(rta!=2);
	
	cout<<"::PUNTAJES::"<<endl;
	cout<<"\nJugador 1-> "<<cont1<<endl;
	cout<<"Jugador 2-> "<<cont2<<endl;
	
}
