#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

#include "head.h"

using namespace std;

class Parabola: public Graph{

void drawgraph()
{
	cleardevice();
	Graph::drawaxes();
	
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


