/*Electricidad. Serie y paralelo */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int totalI=0,totalV=0,voltaje,corriente,n,baterias;
	
	cout<<"Digite la cantidad de baterias: "; cin>>baterias;
	cout<<"Digite el voltaje: "; cin>>voltaje;
	cout<<"Digite la corriente: "; cin>>corriente;
	cout<<"Calcular en Serie(1) o en Paralelo(2): "; cin>>n;
	
	if(n==1){
		for(int i=0;i<=baterias-1;i++){
			totalV += voltaje;
		}
		totalI = corriente;
	}
	else{
		for(int i=0;i<=baterias-1;i++){
			totalI += corriente;
		}
		totalV = voltaje;
	}
	
	cout<<"\nEl voltaje total es: "<<totalV<<endl;
	cout<<"La corriente total es: "<<totalI<<endl;
	cout<<"La potencia es: "<<totalV*totalI<<endl;
	
	getch();
	return 0;
}
