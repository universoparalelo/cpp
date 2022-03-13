/*Bloque 4. 4: escriba un programa que tome cada 4 horas la temperatura 
exterior, leyendola durante un periodo de 24 horas. es decir, debe leer 6 
temperaturas. calcule la temperatura media del dia, la temperatura mas alta
y la mas baja */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int temp=0, t_alt=0, t_baja=999;
	float suma = 0;
	
	for(int i=0 ; i<=24; i+=4){
		cout<<"Digite la temperatura a las "<<i<<": ";
		cin>>temp;
		
		if(temp<t_baja){
			t_baja = temp;
		}
		else if(temp>t_alt){
			t_alt = temp;
		}
		suma +=temp;
	}
	
	cout<<"\nLa temperatura media del dia es: "<<suma/6<<endl;
	cout<<"La temperatura maxima es: "<<t_alt<<endl;
	cout<<"La temperatura minima es: "<<t_baja<<endl;
	
	getch();
	return 0;
}
