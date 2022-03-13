/*do{
   	conjunto de instrucciones;
   }while(expresion logica);
while= piensa luego actua;
do while= actua luego piensa;
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	i=1;
	
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("pause");
	return 0;
}
