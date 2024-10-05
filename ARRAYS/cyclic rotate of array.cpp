#include<iostream>
using namespace std;
int main()
{
    int a[5]={21,45,78,96,5};
    int temp = a[5];
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=5;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0] = temp;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

}