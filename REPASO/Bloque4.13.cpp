/*13. hacer un programa que realice la serie fibonacci -> 1 1 2 3 5 8 13...
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, x=0, y=1, z=0;
	
	cout<<"Digite la cantidad de elementos que quiere ver: ";
	cin>>n;
	
	cout<<"1 ";
	for(int i=0; i<=n-2; i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
		
	}
	
	getch();
	return 0;
}
