#include<iostream>
using namespace std;
int fact(int x)  //FUNCTION DECLARE
{
    int fact = 1,i;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;      ///FUNCTION DEFINE
    }
    return fact;

}
 
int main()
{
    float n,r;
    cout<<"enter the value of n and r:";
    cin>>n>>r;
    float combination = fact(n)/(fact(r)*fact(n-r));
    cout<<combination;

}
