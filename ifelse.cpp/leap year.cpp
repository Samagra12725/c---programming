#include<iostream>
using namespace std;
int main()
{
    int lp;
    cout<<"enter a year:";
    cin>>lp;
    if(lp%400==0)
    cout<<"it is leap:";
    else if(lp%4==0&&lp%100!=0)
    cout<<"It is leap:";
    else
    cout<<"It is not leap:";
}