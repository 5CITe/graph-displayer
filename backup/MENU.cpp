#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "head.h"
using namespace std;

int main(){
int flag=0;
	//loading screen
//	load();
//	getch();	
	
	//menu screen
	initwindow(800,600);
	cleardevice();
	int x, y,n=0;
 	while (1){
    	settextstyle(2,0,6);
		setcolor(WHITE);
		outtextxy(395,0,(char*)"GRAPHIX");
		
		outtextxy(105,140,(char*)"1. User Graph");
		outtextxy(205,240,(char*)"2. Defined Graph");
		outtextxy(305,340,(char*)"3.  About ");
		outtextxy(405,440,(char*)"4.  Exit");
		
		
        delay(0.0001);
        
        if (ismouseclick(WM_MOUSEMOVE)){
            getmouseclick(WM_MOUSEMOVE, x, y);
            //user graph
            if (x>100 && x<216 && y>130 && y<180)
            {
            	rectangle(100,130,216,180); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(150,160,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>100 && x<216 && y>130 && y<180)
						usergraph();
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(100,130,216,180); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(150,160,WHITE);
			}
			//defined graph
			if (x>200 && x<346 && y>230 && y<280)
            {
            	rectangle(200,230,346,280); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(250,231,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>200 && x<346 && y>230 && y<280)
			          	gmenu(); 
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(200,230,346,280); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(250,260,WHITE);
			}
			//about
			if (x>300 && x<400 && y>330 && y<380)
            {
            	rectangle(300,330,400,380); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(302,332,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>300 && x<400 && y>330 && y<380)
            		about();
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(300,330,400,380); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(350,355,WHITE);
			}
			//exit
			if (x>400 && x<466 && y>430 && y<480)
            {
            	rectangle(400,430,466,480); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(402,432,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>400 && x<460 && y>430 && y<480)
            		{
						outtextxy(250,520,(char*)"Exiting....");
		       		   	Sleep(800);
						break; 
		       		   }
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(400,430,466,480); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(450,455,WHITE);
			}
        }
    }
    cleardevice();
    closegraph();
    //console window

}
