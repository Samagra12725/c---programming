#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a)
    {
        cout<<"triangle is equilateral";
    }
    else if(a==b||b==c||c==a)
    {
        cout<<"triangle is isosceles";

    }else{
        cout<<"traiangle is scalene";
    }

    
    
}