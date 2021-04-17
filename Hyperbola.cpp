#include "head.h"
#include "Hyperbola.h"

void Hyperbola::drawgraph()
{
	int x,y;
	for(x=0;x<340;x++)
	{
		y=(2*sqrt(4*x));
		putpixel(x+440, 300-y,GREEN);
		putpixel(x+440, 300+y,GREEN);
		putpixel(360-x, 300-y,GREEN);
		putpixel(360-x, 300+y,GREEN);
	}
	getch();
	cleardevice();
	return;
}

void Hyperbola::drawaxes(){
	Graph::drawaxes();
}
