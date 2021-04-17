#include<graphics.h>

#include "Elipse.h"

void drawgraph(){
	
	cleardevice();
	
	setcolor(GREEN);
	ellipse(400,300,100,100,280,100);
	setcolor(WHITE);
	
	getch();
	cleardevice();
	return;
}
