#include<iostream>

using namespace std;

int main()
{
	int x, y;
	
	cout<<"Digite dos numeros: ";
	cin>>x>>y;
	
	if(x<y){
		cout<<"El mayor es "<<y;
	}
	else if(x>y){
		cout<<"El mayor es "<<x;
	}
	else{
		cout<<"Ambos son iguales";
	}
}
