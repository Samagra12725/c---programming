//print -1 if element is not present in array and in incresing order
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,j;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in increaing order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter element to be searched:"<<endl;
    cin>>key;
    int start = 0;
    int end = n-1;
    if(start!=end)
     cout<<-1;
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(a[mid]==key) 
        {
            cout<<mid;
            break;
        }
        else if(a[mid]<key)
           start = mid+1;
           else 
             end = mid - 1;
    }
}