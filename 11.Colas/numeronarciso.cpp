#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char n[10];
	int long1,total=1,suma=0;
	
	cout<<"Digite un numero: ";
	cin.getline(n,10,'\n');
	
	long1 = strlen(n);
	
	for(int i=0;i<long1;i++){
		total = 1;
		for(int j=0;j<long1+1;j++){
			total *= n[i];
		}
		suma += total;
	}
	
	if(suma==n[10]){
		cout<<"\nEl numero digitado es un numero narcisista"<<endl;
	}
	else{
		cout<<"\nEl numero digitado no es un numero narcisista"<<endl;
	}
	
	getch();
	return 0;
}
