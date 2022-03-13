#include<iostream>
#include<tuple>

using namespace std;

int main(){
	pair (string, string) Rainbow;
	
	Rainbow.first = "Saenz Pena";
	Rainbow.second = "17.00 hs";
	
	cout << "Lugar: "<<Rainbow.first<<endl;
	cout << "Hora: "<<Rainbow.second<<endl;
	
	
	return 0;
}
