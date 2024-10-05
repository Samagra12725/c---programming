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

    //AVERAGE OF ELEMENTS
    int av = sum/n;
    cout<<"AVERAGE OF ELEMENTS = "<<av;
}