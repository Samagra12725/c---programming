//MISSING ELEMENT
#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main()
{   
    int a[50],n,i;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int sum = 0;
    for( i=0;i<n-1;i++)
    {
        sum = sum + i;
    }
    int ans = n*(n+1)/2;
    int missing = ans - sum;
    cout<<"missing number = "<<missing ;
}   