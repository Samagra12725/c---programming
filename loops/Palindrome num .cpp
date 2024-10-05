//PALINDROME NUMBER 
//EX 454=454
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
    if(rev==N)
      cout<<"IT IS PALINDROME NUMBER:";
      else
         cout<<"IT IS NOT PALINDROME:";
    
}