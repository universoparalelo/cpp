#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Introduzca un caracter: ";
	cin>>letra;
	
	switch(letra){
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':cout<<("Es una vocal minuscula");break;
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':cout<<("Es una vocal mayuscula");break;
    default:cout<<("No es una vocal ni mayuscula ni minuscula");break;
 }
 return 0;
}
