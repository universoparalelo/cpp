#include<iostream>

using namespace std;

int main()
{
	float a, b, c, d, resultado=0;
	
	cout<<"Digite el numero a: "; cin>>a;
	cout<<"Digite el numero b: "; cin>>b;
	cout<<"Digite el numero c: "; cin>>c;
	cout<<"Digite el numero d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado<<endl;
}
