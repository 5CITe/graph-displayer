#include "head.h"

using namespace std;

void about(){
	cleardevice();		
	settextstyle(2,0,6);
	setcolor(WHITE);

	outtextxy(0,90,(char*)"This project was created with the purpose of graphing various functions, both pre-defined graphs as");
	outtextxy(0,110,(char*)"well as user defined graphs. Graphs are elementary in the understanding of the nature of a function");
	outtextxy(0,130,(char*)"and there’s no better way to comprehend one than having a visual picture which can be modified");
	outtextxy(0,150,(char*)"with a few toggles of the keyboard.");
	outtextxy(0,190,(char*)"The user defined graphs allow the user to input the degree of the function and then enter the");
	outtextxy(0,210,(char*)"corresponding coefficients for the powers. The program then plots this function. The visual");
	outtextxy(0,230,(char*)"obtained can be used to decipher points like minima, maxima, point of inflection,etc.");
	outtextxy(0,270,(char*)"Overall,our program is well equipped to handle complex high degree functions");
	outtextxy(0,290,(char*)"and can thus provide the user with a unique way of analysing a function.");

	outtextxy(500,10,(char*)"PRESS ANY KEY TO RETURN");

	getch();
	
	cleardevice();
	return;
}

