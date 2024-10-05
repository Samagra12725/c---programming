#include<iostream>
using namespace std;
int main()
{
    int a[100000],n,target,i,j;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter target to get sum:";
    cin>>target;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
             
            cout<<"indexes of sum =" <<i<<" and "<<j<<endl;
           //cout<<"sum = "<<a[i]<<"+"<<a[j]<<"="<<target;
           break;
        }
         cout<<"sum = "<<a[i]<<"+"<<a[j]<<"="<<target;
    }

}
