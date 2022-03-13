//Transmisión de arreglos

#include<iostream>
#include<conio.h>
using namespace std;

int hallarMax(int *, int);

int main(){
	int nEle = 5;
	int elem[] = {2,5,4,7,5};
	
	cout<<"El mayor elemento del arreglo es: "<<hallarMax(elem,nEle)<<endl;
	
	getch();
	return 0;
}

int hallarMax(int *elem, int nEle){
	int max=0;
	
	for(int i=0; i<nEle; i++){
		if(*(elem+i)>max){
			max = *(elem+i);
		}
	}
	
	return max;
}
