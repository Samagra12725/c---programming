#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],n,i,ans,total_sum,prefix=0;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        total_sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=a[i];
        ans=total_sum-prefix;
        if(prefix==ans)
        cout<<1;
        else 
        cout<<0;
    }
}