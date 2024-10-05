// SWAPPING WITHOUT USING THIRD VARIABLE
//this can be done by pass by reference
#include<iostream>
using namespace std;

void swap(int &a, int &b)  //pass by reference
{
    a=a+b;
    b=a-b;
    a=a-b;  
}
int main()
{
    
    int x,y;
    cout<<"enter numbers:";
    cin>>x>>y;
    cout<<"Before swapping x = "<<x<<endl<<"Before swapping y = "<<y<<endl;
    swap(x,y);
    cout<<"After swapping x ="<<x<<endl<<"After swapping y = "<<y<<endl;
}