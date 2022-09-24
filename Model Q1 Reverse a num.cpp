#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    int a,rem,rev=0;
    cout<<"Enter a Number=";
    cin>>a;
    if (a<0)
    {
	   cout<<"Invalid! The input must be Positive Number or a Number";
    }
	else if(a>0)
	{ 
        while(a!=0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        cout<<"Reverse of the number is "<<rev;
    }
    else
    {
    	cout<<"Invalid!";
	}
    return 0;
}
