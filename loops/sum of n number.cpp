#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
        sum=sum + i;
    }
    cout<<"sum = "<<sum;

}