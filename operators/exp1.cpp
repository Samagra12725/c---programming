#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2,c=3,x,y;
    x=a+b*c%b;
    y=a==x;
    a=b>c;
    b=a==b<x;
    c=x!=y;
    cout<<"values is:\n"<<x<<"\n"<<y<<"\n"<<a<<"\n"<<b<<"\n"<<c;
}

