#include<iostream>
using namespace std;
int main()
{
    int arr[1000],i,j,n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}