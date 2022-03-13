/*4. Escribe un programa que defina un vector de numeros y muestre en la 
salida estandar el vector en orden inverso -del ultimo al primer elemento-.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero[5]={1,2,3,4,5};
	
	cout<<"Vector original: "<<endl;
	for(int i=0; i<5; i++){
		cout<<"Elemento["<<i<<"]: "<<numero[i]<<endl;
	}
	
	cout<<"\nVector inverso: "<<endl;
	for(int i=4; i>=0; i--){
		cout<<"Elemento["<<i<<"]: "<<numero[i]<<endl;
	}
	
	getch();
	return 0;
}
