
#include "head.h"
#include "Crcle.h"

void Crcle::drawgraph()
{
	setcolor(GREEN);
	circle(400,300,200);
	setcolor(WHITE);
	getch();
	cleardevice();
	return;
}

void Crcle::drawaxes(){
	Graph::drawaxes();
}
