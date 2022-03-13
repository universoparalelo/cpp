/*15. realice un programa que solicite al usuario que piense un numero
entero entre 1-100. el programaa debe generar un numero aleatorio en ese
mismo rango, e indique al usuario si el numero que digito es menor o mayor
al numero aleatorio, asi hasta que lo adivine, y por ultimo mostrarle el n
numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior + 1 - limite inferior)
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;

int main(){
	int numero, dato, contador=0;
	
	srand(time(NULL));
	dato = 1 + rand() % (100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero<dato){
			cout<<"\nPruebe un numero mayor"<<endl;
		}
		else{
			cout<<"\nPruebe un numero menor"<<endl;
		}
		contador++;
		cout<<"\n";
	}while(numero!=dato);
	
	cout<<"\nFELICITACIONES ACERTO EL NUMERO RANDOM"<<endl;
	cout<<"Cantidad de intentos: "<<contador<<endl;
	
	getch();
	return 0;
}
