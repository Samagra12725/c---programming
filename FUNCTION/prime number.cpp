#include<iostream>
using namespace std;
bool prime(int n)
{
    int i;
    if(n<2)
    return 0;
   
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            ///cout<<" It is not prime:";
            return 0;
        }
        //cout<<"It is prime:";
        return 1;
    
}
/int main()
{
    int x;
    cout<<"enter number to check it is prime or not:";
    cin>>x;
    cout<<Prime(x);
}
