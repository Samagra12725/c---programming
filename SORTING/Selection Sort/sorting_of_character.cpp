#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    char arr[1000];
    int i,j,index,n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<n-1;i++)
    {
      index = i;
      for(j=i+1;j<n;j++)
      {
         if(arr[j]>arr[index])
         index = j;
      }
      swap(arr[i],arr[index]);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
    
