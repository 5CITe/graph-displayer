#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	char ary[500]={"Welcome to the grapher."};
    int i=0;
    while(ary[i]!='\0')
    {
    	cout<<ary[i];
    	Sleep(150);
    	i++;
	}
}

