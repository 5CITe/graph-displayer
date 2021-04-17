
#include "head.h"

using namespace std;

void gmenu(){
	
	cleardevice();
    int x, y,n=0;
	
 	while (1){
    	settextstyle(2,0,6);
		setcolor(WHITE);
		outtextxy(395,0,(char*)"Defined Graph");

		outtextxy(105,110,(char*)"1. Parabola");
		outtextxy(205,210,(char*)"2. Ellipse");
		outtextxy(305,310,(char*)"3. Hyperbola");
		outtextxy(405,410,(char*)"4. Circle");
		outtextxy(505,510,(char*)"5. Previous Menu");
		
        delay(0.0001);
        
        if (ismouseclick(WM_MOUSEMOVE)){
            getmouseclick(WM_MOUSEMOVE, x, y);
            //Parabola
            if (x>100 && x<216 && y>100 && y<150)
            {
            	rectangle(100,100,216,150); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(150,130,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>100 && x<216 && y>100 && y<150){
						Parabola p;
						p.drawaxes();
						p.drawgraph();
					} 
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(100,100,216,150); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(150,130,WHITE);
			}
			//Ellipse
			if (x>200 && x<300 && y>200 && y<250)
            {
            	rectangle(200,200,300,250); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(250,230,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>200 && x<300 && y>200 && y<250){
			          	Elpse e;
			          	e.drawaxes();
						e.drawgraph(); 
					}
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(200,200,300,250); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(250,230,WHITE);
			}
			//Hyperbola
			if (x>300 && x<440 && y>300 && y<350)
            {
            	rectangle(300,300,440,350); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(302,302,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>300 && x<440 && y>300 && y<350){
						Hyperbola h;
            			h.drawaxes();
						h.drawgraph();
					}
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(300,300,440,350); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(350,325,WHITE);
			}
			//Circle
			if (x>400 && x<480 && y>400 && y<450)
            {
            	rectangle(400,400,480,450); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(402,402,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>400 && x<460 && y>400 && y<450){
						Crcle c;
            			c.drawaxes();
						c.drawgraph();
					}
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(400,400,480,450); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(450,425,WHITE);
			}
			//Back
			if (x>500 && x<666 && y>500 && y<550)
            {
            	rectangle(500,500,666,550); 
				setfillstyle(SOLID_FILL,GREEN);
				floodfill(502,502,WHITE);
				if (ismouseclick(WM_LBUTTONDOWN)){
            		getmouseclick(WM_LBUTTONDOWN, x, y);
            		if (x>500 && x<660 && y>500 && y<550)
            		{
						outtextxy(250,490,(char*)"Returning....");
		       		   	Sleep(800);
						break; 
		       		}
				}
			}
            else
            {
				setcolor(BLACK);
				rectangle(500,500,666,550); 
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,BLACK);
				floodfill(550,525,WHITE);
			}
        }
    }
    cleardevice();
    return;
}
