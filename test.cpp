#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
	char s[20];
	int a = 1;
	itoa(a,s,10);
	
	string b;
	int c= 20;
	b=to_string(c);
cout<<s<<endl;
cout<<b<<endl;
system("pause");
}

