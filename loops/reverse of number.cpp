//REVERSE OF A NUMBER
#include<iostream>
using namespace std;
int main()
{
    int rev=0,num,rem;
    cout<<"enter number to give reverse:";
    cin>>num;
    int N=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;

    }
    cout<<"REVERSE OF "<<N<<"="<<rev;
}