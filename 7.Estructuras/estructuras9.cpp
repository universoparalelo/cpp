//7.

#include<iostream>
#include<conio.h>

using namespace std;

struct Etapa{
	int horas, minutos, segundos;
}etapa[10];

int main(){
	int n, totalh=0, totalm=0, totals=0;
	
	cout<<"Digite la cantidad de etapas: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Etapa "<<i+1<<endl;
		cout<<"Horas: "; cin>>etapa[i].horas;
		cout<<"Minutos: "; cin>>etapa[i].minutos;
		cout<<"Segundos: "; cin>>etapa[i].segundos;
	
		totalh += etapa[i].horas;
		totalm += etapa[i].minutos;
		if(totalm >= 60){
			totalm -= 60;
			totalh++;
		}
		totals += etapa[i].segundos;
		if(totals >= 60){
			totals -= 60;
			totalm++;
		}
		
		cout<<"\n";
	}
	
	cout<<"\nTiempo empleado en el circuito: "<<endl;
	cout<<"Horas: "<<totalh<<endl;
	cout<<"Minutos: "<<totalm<<endl;
	cout<<"Segundos: "<<totals<<endl;
	
	getch();
	return 0;
}
