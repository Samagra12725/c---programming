#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    char arr[1000];
    int n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //for no of rounds
    for(int i=n-2;i>=0;i--)
    {
        bool swapped = 0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swapped = 1;
                swap(arr[j+1],arr[j]);

            }
        }
        if(swapped==0)
        break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}