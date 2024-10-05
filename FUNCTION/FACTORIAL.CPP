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
    //return 0;

}
int main()
{
    int n,factorial;
    cout<<"enter number to give factorial:";
    cin>>n;
    factorial = fact(n);     //FUNCTION CALL     
    cout<<" Sum of factorial of "<<n<<" = "<<factorial<<endl;

    
}
