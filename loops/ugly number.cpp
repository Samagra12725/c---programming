//UGLY NUMBER
//ugly number are those num if its prime factors are only 2,3 and 5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    if(n==0)
    cout<<"IT IS NOT AN UGLY NUMBER:";
    while(n%2==0)
    n=n/2;
    while(n%3==0)
    n=n/3;
    while(n%5==0)
    n=n/5;
    cout<<"IT IS AN UGLY NUMBER:";



}