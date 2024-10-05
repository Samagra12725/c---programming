///FINDING MAXIMUM ELEMENTS IN ARRAY
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],n,i;
    cout<<"enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int ans = a[0];

    //min value
    for( i=1;i<n;i++)
    {
        if(a[i]>ans)
        ans = a[i];
    }
    cout<<ans;
}  