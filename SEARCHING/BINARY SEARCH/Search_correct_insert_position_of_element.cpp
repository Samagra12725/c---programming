// SEARCH CORRECT INSERT POSITION
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,index;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in increaing order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=0,end=n-1;
    int target;
    cout<<"enter element to be inserted"<<endl;
    cin>>target;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==target)
        {
            index = mid;
            break;
            //cout<<index;
        }
        else if(a[mid]<target)
        start=mid+1;
        else
        {
            index=mid;
            end=mid-1;
            //cout<<index;
        }
    }
      cout<<index;
}