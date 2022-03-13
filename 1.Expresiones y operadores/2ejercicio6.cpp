#include<iostream>

using namespace std;

int main()
{
	float a, b, c, d, media=0;
	
	cout<<"Celeste, Martin Rodich: "; cin>>a;
	cout<<"Bianca, Grodziñski: "; cin>>b;
	cout<<"Ludmila, Gomez: "; cin>>c;
	cout<<"Valeria, Escalante: "; cin>>d;
	
	media = (a+b+c+d)/4;
	
	cout.precision(2);
	cout<<"\nLa nota media final es: "<<media<<endl;
	
	return 0;
}
