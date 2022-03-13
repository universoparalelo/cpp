#include<iostream>

using namespace std;

int main()
{
	float n1, n2, n3;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	cout<<"Digite otro numero: "; cin>>n3;
	
	if(n1>n2,n1>n3){
		cout<<"Este es el mayor: "<<n1;
	}
	else if(n2>n1,n2>n3){
		cout<<"Este es el mayor: "<<n2;
	}
	else{
		cout<<"Este es el mayor: "<<n3;
	}
	return 0;
}
