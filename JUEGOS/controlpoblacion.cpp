#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int conteo=0;
	float start, years=0, end;
	
	do{
		cout<<"Comienzo: "; cin>>start;
	}while(start<9);
	
	do{
		cout<<"Final: "; cin>>end;
	}while(end<start);
	
	while(start<=end){
		years=start+(start/3)-(start/4);
		if(years<=end){
			conteo++;
		}
		start=years;
	}
	
	cout<<"Años: "<<conteo<<endl;
	
	getch();
	return 0;
}
