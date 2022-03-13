#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	cout<<"Digite otro numero: "; cin>>n3;
	cout<<"Digite otro numero: "; cin>>n4;
	
	if(n1==n4){
		cout<<"El ultimo numero digitado es igual al primero digitado"<<endl;
	}
	else if(n2==n4){
		cout<<"El ultimo numero digitado es igual al segundo digitado"<<endl;
	}
	else if(n3==n4){
		cout<<"El ultimo numero digitado es igual al tercero digitado"<<endl;
	}
	else{
		cout<<"El ultimo numero no es igual a ninguno de los anteriores"<<endl;
	}
}
