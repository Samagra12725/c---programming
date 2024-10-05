/// PEAK INDEX IN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,mid;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in increaing order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=0,end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]>a[mid-1])
        {
        cout<<"peak index = "<<mid<<endl;
        cout<<"peak element = "<<a[mid];
        break;
        }
        else if(a[mid]>a[mid-1])
        start=mid+1;
        else
        end=mid-1;
    }
   // cout<<"peak index = "<<ans;
}