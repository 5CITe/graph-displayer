#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

#include "head.h"

using namespace std;
void parabola();
void circl();
void hyperbola();
void ellips();

void drawgraph(char s)
{
	cleardevice();
	graph();
	
	if (s=='p')
		parabola();
	else if(s=='c')
		circl();
	else if(s=='h')
		hyperbola();
	else if(s=='e')
		ellips();
		
    getch();
    cleardevice();
    return;
   }


void parabola(){
	int x,y;
	for(x=0;x<340;x++)
	{
		y=(2*sqrt(4*x));
		putpixel(x+400, 300-y,GREEN);
		putpixel(x+400, 300+y,GREEN);
	}
	//getch();
	//cleardevice();
	return;
}

void circl(){
	setcolor(GREEN);
	circle(400,300,200);
	setcolor(WHITE);
	//getch();
	//cleardevice();
	return;
}

void hyperbola(){
	int x,y;
	for(x=0;x<340;x++)
	{
		y=(2*sqrt(4*x));
		putpixel(x+440, 300-y,GREEN);
		putpixel(x+440, 300+y,GREEN);
		putpixel(360-x, 300-y,GREEN);
		putpixel(360-x, 300+y,GREEN);
	}
	//getch();
	//cleardevice();
	return;
}

void ellips(){
	setcolor(GREEN);
	ellipse(400,300,100,100,280,100);
	setcolor(WHITE);
	//getch();
	//cleardevice();
	return;
}
