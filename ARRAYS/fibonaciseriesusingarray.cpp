//FIBONACI SERIES
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter size of array:";
    cin>>n;
    int a[1000];

     a[0]=0;
     a[1]=1;

     for(int i=2;i<=n;i++)
     {
        a[i] = a[i-1]+a[i-2];
        cout<<a[i]<<" ";
 
     }
     cout<<endl;

     cout<<a[n]<<" ";


}

