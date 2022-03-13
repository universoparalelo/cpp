//

#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y){
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void ocultar_cursor(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 5;
	cci.bVisible = FALSE;
	
	SetConsoleCursorInfo(hCon, &cci);
	
}

int main(){
	
	ocultar_cursor();
	int x = 10, y = 10;
	gotoxy(x,y); printf("*");
	
	bool game_over = false;
	
	while(!game_over){
		gotoxy(x,y); printf("*");
		
		if(kbhit()){
			char tecla = getch();
			gotoxy(x,y); printf(" ");
			if(tecla == IZQUIERDA) x--;
			if(tecla == DERECHA) x++;
			if(tecla == ARRIBA) y--;
			if(tecla == ABAJO) y++;
			
		}
		
		Sleep(30);
	}	

	return 0;
}
