//in decreasing order
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,j;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in decresing order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter element to be searched:"<<endl;
    cin>>key;
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(a[mid]==key) 
        {
            cout<<mid;
            break;
        }
        else if(a[mid]<key)
           end = mid-1;
           else 
             start= mid+1;
    }
}
