#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],n,i,sum = 0;
    cout<<"enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ///SUM

    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    cout<<"SUM OF ELEMNTS = "<<sum;
}