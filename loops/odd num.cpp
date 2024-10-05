#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter no to print: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%2!=0)
        cout<<i<<endl;
    }

}
