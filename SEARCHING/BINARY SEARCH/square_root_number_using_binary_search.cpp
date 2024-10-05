#include<iostream>
using namespace std;
int main()
{
    int x,ans;
    cout<<"enter number to get square root:";
    cin>>x;
    int start=0,end=x,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==x)
        {
            int ans = mid;
            break;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            start=mid+1;
        }
        else 
        end=mid-1;
    }
    cout<<"square root of "<<x<<" = "<<ans;
  


}