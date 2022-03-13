/*5. Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. el programa debe 
entregar la suma de los valores mayores a 0 introducidos */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,suma=0;
	
	do{
		cout<<"Digite un numero: ";
		cin>>n;
		if(n>0){
			suma += n;
		}
	}while(n!=0);
	
	cout<<"\nLa suma de todos los numero ingresados es: "<<suma<<endl;
	
	getch();
	return 0;
}
