//REVERSE OF A NUMBER
#include<iostream>
using namespace std;
int reverse(int num)
{
     int rem,rev=0;
    while(num>0)
    {
       
         rem=num%10;
         num=num/10;
         rev=rev*10+rem;
    }
    return rev;

}
int main()
{
    int x;
    cout<<"enter number to give reverse:";
    cin>>x;
    cout<<reverse(x);
    
}