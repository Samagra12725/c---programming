//conversion of decimal to binary
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter decimal number to print in binary form:";
    cin>>n;
    int rem,ans=0,mul=1;
    while(n>0)
    {
        //remainder
        rem = n%2;

        // quotient
        n=n/2;

        //ans=in binary form
        ans = rem*mul+ans;

        //mul
        mul=mul*10;
        //i++;

    }
    cout<<ans<<endl;
   
}