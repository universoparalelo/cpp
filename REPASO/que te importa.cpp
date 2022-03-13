#include <iostream>
#include <string>

using namespace std;

int main(){
	char cadena[20];
	
	printf("Hola, escriba su nombre: ");
	
	scanf("%20s",cadena);
	
	string nombre = cadena;
	
	printf("\nBienvenidx %s, gracias por utilizar nuestro servidor.\n",nombre.c_str());
	 
	 return 0;
}
