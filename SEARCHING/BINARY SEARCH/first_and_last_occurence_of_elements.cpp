//FIRST AND LAST OCCRENCE OF ELEMETS IN SORTED ARRAY
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,j,L=-1,F=-1;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in SORTED order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter element to be checked for occurence:"<<endl;
    cin>>key;
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(a[mid]==key) 
        {
           F = mid;
           end = mid-1;
        }
        else if(a[mid]<key)
           start= mid+1;
           else 
           end = mid-1;  
    }
    cout<<"first occurence = "<<F<<endl;
     start = 0;
     end = n-1;
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(a[mid]==key) 
        {
          L = mid;
          start = mid + 1;
        }
        else if(a[mid]<key)
          start= mid+1;
           else 
             end = mid-1;
    }
        cout<<"last occurence = "<<L;

}
