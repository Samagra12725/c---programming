//program of sum of  factorial of num using function

// 1 + 2^2/2! + 3^3/3!...... 

#include<iostream>
using namespace std;
#include<cmath>

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
    int i, sum,x;
    cout<<"enter number of terms:";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        sum = sum + pow(i,i)/fact(i);
    }
    cout<<"sum of given series = "<<sum;
}
