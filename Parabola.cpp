#include "head.h"
#include "Parabola.h"

void Parabola::drawgraph()
{
	int x,y;
			
	for(x=0;x<340;x++)
	{
		y=(2*sqrt(4*x));
		putpixel(x+400, 300-y,GREEN);
		putpixel(x+400, 300+y,GREEN);
	}
	getch();
	cleardevice();
	return;
}

void Parabola::drawaxes(){
	Graph::drawaxes();
}
