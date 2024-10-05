#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter number for even:";
    cin>>n;
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
        cout<<i<<" ";
        sum=sum+i;
        i++;

    }
    cout<<endl;
    cout<<"sum of even num "<<sum<<endl;

    int p,j=1;
    cout<<"enter number for odd number: ";
    cin>>p;
    int add=0;
    while(j<=p)
    {
        if(j%2!=0)
        cout<<j<<" ";
        add=add+j;
        j++;
    }
    cout<<endl;
   cout<<"add of odd no "<<add;


}
