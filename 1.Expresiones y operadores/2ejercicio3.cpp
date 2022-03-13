#include<iostream>

using namespace std;

int main()
{
	float a, b, c, d, e, f, resultado=0;
	
	cout<<"Digite el numero a: "; cin>>a;
	cout<<"Digite el numero b: "; cin>>b;
	cout<<"Digite el numero c: "; cin>>c;
	cout<<"Digite el numero d: "; cin>>d;
	cout<<"Digite el numero e: "; cin>>e;
	cout<<"Digite el numero f: "; cin>>f;
	
	resultado = (a+ (b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
	
}
