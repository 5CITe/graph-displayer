#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void load(){
	int k=0;
	char s[5];
	
	initwindow(800,600);
	cleardevice();		
	settextstyle(2,0,6);
	setcolor(WHITE);

//LOADING CODE START	
	outtextxy(250,490,(char*)" Loading.... ");
	
	rectangle(251,430,552,470);
	rectangle(250,429,553,471);
	
	setcolor(GREEN);
	for(int i=0;i<300;i++){
		if(i%3==0) k++;
		line(252+i,431,252+i,470);
		delay(30);
		itoa(k,s,10);
		outtextxy(516,490,strcat(s,"%"));
	}
	
// lOADING CODE DONE
	//readimagefile("edit2.jpg",0,0, 200,200);

	outtextxy(516,490,(char*)"            ");
	outtextxy(250,490,(char*)" Press any key to continue.... ");
	while(!kbhit())
		Sleep(100);

	cleardevice();
	closegraph();
	
}
