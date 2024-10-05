#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter points";
    cin>>x>>y;
    if(x==0&&y!=0)
    {
         cout<<"point lies in y axis";
    }
    else if(y==0&&x!=0)
    {
         cout<<"point lies in x axis";
    }
    else 
      cout<<"point lies in the origin";

}
