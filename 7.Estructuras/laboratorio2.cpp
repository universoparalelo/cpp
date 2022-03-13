//lab 2

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	int long1=0, long2=0, suma1=0, suma2=0;
	char player1[20], player2[20];
	
	cout<<"Player 1: ";
	cin.getline(player1, 20, '\n');
	cout<<"Player 2: ";
	cin.getline(player2, 20, '\n');
	
	strlwr(player1);
	strlwr(player2);
	
	long1 = strlen(player1);
	long2 = strlen(player2);
	
	for(int i=0; i<long1; i++){
		if(player1[i]=='a'||player1[i]=='e'||player1[i]=='i'||player1[i]=='l'||player1[i]=='n'||player1[i]=='o'||player1[i]=='r'||player1[i]=='s'||player1[i]=='t'||player1[i]=='u'){
			player1[i] = 1; 
		}
		else if(player1[i]=='d'||player1[i]=='g'){
			player1[i] = 2;
		}
		else if(player1[i]=='b'||player1[i]=='c'||player1[i]=='m'){
			player1[i] = 3;
		}
		else if(player1[i]=='f'||player1[i]=='h'||player1[i]=='v'||player1[i]=='w'||player1[i]=='y'){
			player1[i] = 4;
		}
		else if(player1[i]=='k'){
			player1[i] = 5;
		}
		else if(player1[i]=='j'||player1[i]=='x'){
			player1[i] = 8;
		}
		else if(player1[i]=='q'||player1[i]=='z'){
			player1[i] = 10;
		}
		else{
			player1[i] = 0;
		}
		suma1 += player1[i];
	}
	
	for(int i=0; i<long2; i++){
		if(player2[i]=='q'||player2[i]=='z'){
			player2[i] = 10; 
		}
		else if(player2[i]=='d'||player2[i]=='g'){
			player2[i] = 2;
		}
		else if(player2[i]=='b'||player2[i]=='c'||player2[i]=='m'){
			player2[i] = 3;
		}
		else if(player2[i]=='f'||player2[i]=='h'||player2[i]=='v'||player2[i]=='w'||player2[i]=='y'){
			player2[i] = 4;
		}
		else if(player2[i]=='k'){
			player2[i] = 5;
		}
		else if(player2[i]=='j'||player2[i]=='x'){
			player1[i] = 8;
		}
		else if(player2[i]=='a'||player2[i]=='e'||player2[i]=='i'||player2[i]=='l'||player2[i]=='n'||player2[i]=='o'||player2[i]=='r'
		||player2[i]=='s'||player2[i]=='t'||player2[i]=='u'){
			player2[i] = 1;
		}
		else{
			player2[i] = 0;
		}

		suma2 += player2[i];
	}
	
	if(suma1 > suma2){
		cout<<"\nPlayer1 wins"<<endl;
	}
	else{
		cout<<"\nPlayer2 wins"<<endl;
	}
	
	getch();
	return 0;
}
