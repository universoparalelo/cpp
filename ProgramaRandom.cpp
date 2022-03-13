//Programa que muestra pasos de baile de manera aleatoria
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<string>

using namespace std;

int main(){
	//declarando los pasos
	string pasosDeBaile[] = {"contrapaso", "giro", "perreo", "onda", "piso", 
	"caida", "salto", "bajada", "patada", "golpes con caderas"};
	
	//variable aleatoria
	srand(time(NULL));
	
	int num = rand();
	char rta;
	
	//bucle para buscar el numero aleatorio y asignarlo al arreglo
	/*for(int i=0; i<3; i++){
		
		num = rand()%10;
	
		cout<<"El siguiente paso es: "<<pasosDeBaile[num]<<endl;
	}*/
	
	do{
		num = rand()%10;
		cout<<"\nEl siguiente paso es: "<<pasosDeBaile[num]<<endl;
		cout<<"Quiere ver el siguiente paso?(y/n): "; cin>>rta;
		
	}while(rta=='y');
	
	system("pause");
	return 0;
}
