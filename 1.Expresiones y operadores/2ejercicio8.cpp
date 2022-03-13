#include<iostream>
#include<math.h>/* Libreria Matematica y trigonometrica C++ */

using namespace std;

int main(){
	float o, a, b, hipotenusa=0;
	
	cout<<"Digite el valor del cateto opuesto: "; cin>>o;
	cout<<"Digite el valor del cateto adyacente: "; cin>>a;
	
	b = (pow(o, 2)) + (pow(a,2));
	hipotenusa = sqrt(b);
	
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	return 0;
}
