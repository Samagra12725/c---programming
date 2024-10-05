#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n,i,sum=0;
    cout<<"enter number to print sum";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum + i;
        
    }
    cout<<sum;
}