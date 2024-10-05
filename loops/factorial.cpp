#include<iostream>
using namespace std;
int main()
{
    double fact=1,i,n;
    cout<<"enter num to print factorial";
    cin>>n;
   /* for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;*/
i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;

    }
    cout<<fact;
}