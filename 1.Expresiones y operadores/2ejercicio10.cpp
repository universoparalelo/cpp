#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a, b, c, positivo=0, negativo=0, x=0, y=0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	x = pow(b,2);
	y = sqrt(x-4*a*c);
	positivo = (-b + y)/(2*a);
	negativo = (-b - y)/(2*a);
	
	cout<<"\nX1: "<<positivo<<endl;
	cout<<"X2: "<<negativo<<endl;
	
	return 0;
}
