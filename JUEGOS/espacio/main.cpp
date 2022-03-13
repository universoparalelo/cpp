#include<iostream>
#include<allegro.h>
using namespace std;

int main(){
	allegro_init();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,740,500,0,0);
	BITMAP *buffer = create_bitmap(740.500);

	int x1,x2,y1,y2;

	x1=0;
	y1=0;
	x2=30;
	y2=30;

	while(!key(KEY_ESC)){


	}

	return 0;
}
END_OF_MAIN();
