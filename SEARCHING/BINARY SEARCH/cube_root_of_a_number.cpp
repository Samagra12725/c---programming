#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int x,ans;
    cout<<"enter number to get cube root:";
    cin>>x;
    int start=0,end=x,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid*mid==x)
        {
            int ans = mid;
            break;
        }
        else if(mid*mid*mid<x)
        {
            ans=mid;
            start=mid+1;
        }
        else 
        end=mid-1;
    }
    cout<<"cube root of "<<x<<" = "<<ans;
}
