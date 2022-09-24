#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,f;
	cout<<"Enter the marks in python: ";
	cin>>a;
	cout<<"Enter the marks in c programming: ";
	cin>>b;
	cout<<"Enter the marks in Mathematics: ";
	cin>>c;
	cout<<"Enter the marks in Physics: ";
	cin>>d;
	if(a<0 || b<0 || c<0 || d<0)
	cout<<"Ivalid!! The marks should be only in positive.";
	else if(a>100 || b>100 || c>100 || d>100)
	cout<<"Ivalid!! The marks should be less than 100.";
	else
	{
	e=a+b+c+d;
	cout<<"Total="<<e;
    f=e/4;
    cout<<"\n Aggregate="<<f;
        if(f>=75)
            cout<<"\nDISTINCTION";
        else if(f>=60 && f<75)
            cout<<"\nFIRST DIVISION";
        else if(f>=50 && f<60)
            cout<<"\nSECOND DIVISION";
        else if(f>=40 && f<50)
            cout<<"\nTHIRD DIVISION";
        else
            cout<<"\nFAIL! Better Luck Next Time";
   }
	return 0;
}
