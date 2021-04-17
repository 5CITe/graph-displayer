#include "head.h"
#include "Elpse.h"

void Elpse::drawgraph(){
	
	setcolor(GREEN);
	ellipse(400,300,100,100,280,100);
	setcolor(WHITE);
	
	getch();
	cleardevice();
	return;
}

void Elpse::drawaxes(){
	Graph::drawaxes();
}
