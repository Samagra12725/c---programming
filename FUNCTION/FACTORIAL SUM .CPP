//program of sum of  factorial of num using function
#include<iostream>
using namespace std;
int fact(int n)  //FUNCTION DECLARE
{
    int fact = 1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;      ///FUNCTION DEFINE
    }
    return fact;

}
int main()
{
    int x,sum=0;
    cout<<"enter number to give factorial";
    cin>>x;
    for(int j=1;j<=x;j++)
    {
    sum = sum + fact(x);     //FUNCTION CALL
    }      
    cout<<" Sum of factorial of "<<x<<"="<<sum<<endl;

    
}
