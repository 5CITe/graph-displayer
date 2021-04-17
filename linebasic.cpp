#include<iostream>
#include<graphics.h>
using namespace std;

int main(){	
	int x=100;
	int y=100;
	initwindow(800,600);
//	while(!ismouseclick(WM_LBUTTONUP)){
	//		getmouseclick(WM_LBUTTONUP ,x,y);

outtextxy(x,y,"here");
system("pause");
	cleardevice();
	closegraph();
}
