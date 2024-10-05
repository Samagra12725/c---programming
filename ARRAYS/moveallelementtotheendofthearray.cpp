//MOVE ALL NEGATIVE ELEMETS TO THE END OF THE  ARRAY 
#include<iostream>
using namespace std;
int main()
{
    int n,a[10000],i;
    cout<<"enter size of array:";
    cin>>n;
    int temp[n],j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            temp[j] = a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp[j] = a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i] = temp[i];
    }
    cout<<a[i];

}