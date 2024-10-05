#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter number";
    cin>>n;
    if(n<2)
    {
        cout<<n<<" it is not a prime number ";
        return 0;
       
    }
    else 
    {
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
            cout<<n<<" not a prime";
            return 0;
            }
        }
    
        cout<<n<<" is prime number";
        return 0;
    }    
        

}