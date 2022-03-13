#include <iostream>

using namespace std;

int main()
{
	float a, b, resultado=0;
	
	cout<<"Digite el numero a: "; cin>>a;
	cout<<"Digite el numero b: "; cin>>b;
	
	resultado = (a / b) + 1;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
