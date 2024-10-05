#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[100000],n,i;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in 0 and 1:";
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int start=0,end=n-1;
    while(start<end)
    {
        if(a[start]==0)
        start++;
        else
        {
            if(a[end]==0)
            swap(a[start],a[end]);
            start++;
            end--;
        }
        end--;
    }
    
         cout<<a[i]<<" ";
    
    
}