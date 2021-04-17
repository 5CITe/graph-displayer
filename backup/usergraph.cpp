// Coefficients of a polynomial

#include<iostream>
#include<math.h>
#include<graphics.h>
#include "head.h"
using namespace std;
int push(int stk[20],int val,int &top);
	
void usergraph()
{		
	    int stk[10];
	    int top=0;
	    cout<<"Enter the degree of the polynomial:\n";
	    int count;
	    cin>>count;
	    int val;
	
	    for(int i=0;i<=count;i++)
	    {
	        cout<<"Enter the coefficient for x^"<<(count-i)<<endl;
	        cin>>val;
	        push(stk,val,top);
	    }
		
	/*	for(int i=count;i>=0;i--)
		{
			cout<<"value of top right now"<<count-i; 
			pop(stk,top);
			cout<<endl;
			
		}
	*/	
		//initwindow(800,600);
		cleardevice();
		graph();
		for(double x=-280;x<=280;x+=0.01)
		{
			top = count; double y=0;
			for	(int i=0;i<=count;i++,top--)
			{
				y=y+stk[top]*pow(x,i);
			}
			//cout<<"before: x:"<<x<<"y:"<<y<<endl;	
			putpixel(x+400,300-y,GREEN);
			//cout<<"after: x:"<<x+400<<"y:"<<300-y<<endl;	
		
		}  
		getch();
		cleardevice();
	/*	if(getch())
		{
			cleardevice();
			main();
		}*/
}

int push(int stk[10],int val,int &top)
{
	    if(top==10)
	    {
	        //cout<<"STACK OVERFLOW\n";
	        return 0;
	    }
	    else
	    {
	        stk[top]=val;
	
	        top++;
	        return 1;
	    }
}

/*int pop(int stk[10],int &top)
{
	if(top==0)
    {
        //cout<<"STACK EMPTY\n";
        return 0;
	}
         else
    {      
		top--;
		cout<<stk[top];       
        return 1;
    }
*/ 
	
