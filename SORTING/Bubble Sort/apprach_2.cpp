//ARRANGE IN ASCENDING ORDER USING THIRD VARIABLE
//DECREASING ORDER
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[1000],n,temp;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       //for no of rounds
    for(int i=1;i<=n-1;i++)
    {
        bool swapped = 0;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swapped = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

               
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