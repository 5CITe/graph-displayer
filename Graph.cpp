#include "head.h"
#include "Graph.h"

using namespace std;

void Graph::drawaxes() {
	cleardevice();
    setcolor(WHITE);
    char ch[10];
    //y-axis
    line(400,0,400,600);
    line(401,0,401,600);
    //x-axis
    line(0,300,800,300);
	line(0,301,800,301);
    //positive y axis
    for(int i=0;i<300;i++){
            if(i%20==0&&i!=0){
                              line(398,i,403,i);
                              int co =300-i;
                              itoa(co,ch,10);
                              outtextxy(405,i-10,ch);
    }}
     //negative y axis
    for(int i=0;i<300;i++){
            if(i%20==0&&i!=0){
                              line(398,i+300,403,300+i);
                              int co =-i;
                              itoa(co,ch,10);
                              outtextxy(405,i+290,ch);
    }}
    //negative x axis
    for(int i=0;i<400;i++){
            if(i%40==0&&i!=0){
                              line(i,298,i,303);
                              int co =i-400;
                              itoa(co,ch,10);
                              outtextxy(i-15,305,ch);
    }}
     //positive x axis
    for(int i=0;i<400;i++){
            if(i%40==0&&i!=0){
                              line(i+400,298,i+400,303);
                              int co =i;
                              itoa(co,ch,10);
                              outtextxy(i+395,305,ch);
    }}
    
    outtextxy(500,10,(char*)"PRESS ANY KEY TO RETURN");

	return;
}


