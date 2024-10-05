#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int prefix=0;
    for(i=0;i<n;i++)
    {
        prefix = prefix + i;
    }
    cout<<prefix;
}