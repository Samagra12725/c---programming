//conversion of decimal to octal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter decimal number to print in octal form:";
    cin>>n;
    int rem,ans=0,mul=1;
    while(n>0)
    {
        //remainder
        rem = n%8;

        // quotient
        n=n/8;            //where n is in decimal form

        //ans=in octal form
        ans = rem*mul+ans;

        mul=mul*10;

    }
    cout<<ans<<endl;
   
}