//conversion of  binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter binary number to print in decimal form:";
    cin>>n;
    int rem,ans=0,mul=1;
    while(n>0)
    {
        //remainder
        rem = n%10;

        // quotient
        n=n/10;            //where n is in binary form

        //ans=in decimal form
        ans = rem*mul+ans;

        //mul
        mul=mul*2;

    }
    cout<<ans<<endl;
   
}