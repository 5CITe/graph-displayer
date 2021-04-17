
#include "head.h"
#include "UserGraph.h"



void UserGraph::drawgraph()
{
	int stk[10];
	//double stk[10];
    int top=0;
    std::cout<<"Enter the degree of the polynomial:\n";
    int count;
    std::cin>>count;
    int val;
	
    for(int i=0;i<=count;i++)
    {
        std::cout<<"Enter the coefficient for x^"<<(count-i)<<std::endl;
        std::cin>>val;
        push(stk,val,top);
    }
    /*double y=0.0;
    for	(int i=0;i<=count;i++,top--)
	{
		cout<<"Stk "<<i<<" :"<<stk[i]<<endl;
		y=y+stk[top];
		cout<<"y :"<<y<<endl;
	}*/
    this->drawaxes();
	for(double x=-280;x<=280;x+=0.01)
	{
		top = count; double y=0.0;
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
}

void UserGraph::drawaxes(){
	Graph::drawaxes();
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


	

