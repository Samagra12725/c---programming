#include<iostream>
using namespace std;
int main()
{
    int a=5,b=3,c=1,x,y;
    x=a*b+a%b;
    y=b&&c||x;
    a=c&&a+b;
    b=b||c*x;
    c=!a;
    x++;
    --y;
    cout<<"values is:\n"<<x<<"\n"<<y<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
}