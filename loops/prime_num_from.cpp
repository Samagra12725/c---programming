#include<iostream>
using namespace std;
int main()
{ 
    int n,j,i;
    cout<<"enter number:";
    cin>>n;
    if(n<2)
    cout<<"it is not prime:";
    for(int i=1;i<n;i++)
    {
        for( j=2;j<n;j++)
        {
            if(n%j==0)
            cout<<"it is not prime:";
        }
        cout<<j;
    }
}
