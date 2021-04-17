//Accepting the power,coefficient and sign of each term of the expression
#include<iostream>
#include<math.h>
using namespace std;

struct term
{
    int power;
    char sign;
    int coeff;
    
}ary[50];
void dissect(char exp[50]);
void exp()
{
    cout<<"Please input the expression in terms of x.\nEx: +1x^2+2x^1+1x^0 represents x^2 + 2^x + 1 "<<endl;
    char exp[50];
    cin>>exp;
    dissect(exp);
}
void dissect(char exp[50])
{
                                    //Begin dissectiong the expression
    int i=0;                        //Counter for each element in the expression
    
    int j=0;                        //Counter for each element in ary
    
    while(exp[i]!='\0')             //Run this to check every element
    {
        if(exp[i]=='+')
        {
            int sum=0;
            int k;
            char test[50];
            ary[j].sign='+';        //Assign the sign
            for(k=i+1;(exp[k]>=48)&&(exp[k]<=57);k++)
            {
                test[k-i-1]=exp[k];
                
            }
            for(int l=k-1;l>=i+1;l--)
            {
                sum=sum+((int)exp[l]*(pow(10,k-l-1)));
                
                
            }
            ary[j].coeff=sum;
            i=k+1;
        }
        
        if(exp[i]=='-')
        {
            int sum=0;
            int k;
            char test[50];
            ary[j].sign='-';        //Assign the sign
            for(k=i+1;(exp[k]>=48)&&(exp[k]<=57);k++)
            {
                test[k-i-1]=exp[k];
            }
            for(int l=k-1;l>=i+1;l--)
            {
                sum=sum+((int)exp[l]*(pow(10,k-l-1)));
                ary[j].coeff=sum;
            }
            i=k+1;
        }
        
        if(exp[i]=='^')
        {
            int sum=0;
            int k;
            char test[50];
            
            for(k=i+1;(exp[k]>=48)&&(exp[k]<=57);k++)
            {
                test[k-i-1]=exp[k];
            }
            
            for(int l=k-1;l>=i+1;l--)
            {
                sum=sum+((int)exp[l]*(pow(10,k-l-1)));
                            }
            ary[j].power=sum;
            
            i=k;
            j++;
            
            
            
        }
        
    }
    
    for(int m=0;m<j;m++)
     {
     cout<<"The sign of the "<<m<<"st expression is "<<ary[m].sign<<endl;
     cout<<"The coefficient of the "<<m<<"st expression is "<<(char)ary[m].coeff<<endl;
     cout<<"The power of the "<<m<<"st expression is "<<(char)ary[m].power<<endl;
     }
    
    
    char option;
    
    do {
        
        
    cout<<"Enter a value to check "<<endl;
    int value;
    int result=0;
    cin>>value;
    for(int n=0;n<j;n++)
    {
        if(ary[n].sign=='+')
        {
            result=result+(((int)ary[n].coeff-48)*(pow(value,((int)ary[n].power-48))));
        }
        if(ary[n].sign=='-')
        {
            result=result-(((int)ary[n].coeff-48)*(pow(value,((int)ary[n].power-48))));
        }
     }
    cout<<"The result is "<<result<<endl;
        cout<<"would you like to continue?\n";
                cin>>option;
    }while( option=='y'||option=='Y');
            
                
            
            
}


