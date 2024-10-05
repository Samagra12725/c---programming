#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n)
{
    int count=0;
    while(n)
    {
        n=n/10;
        count++;
        return count;
    }
}
  bool armstrong(int num,int digit)
  {
  int n = num,ans = 0;
  while(n)
    {
    int rem = n%10;
    n = n/10;
    ans = ans + pow(rem,digit);
    }
    if(ans==num)
      return 1;
    else
       return 0;
 }
int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;
    // count digit
    int digit = countdigit(num);
    // armstrong num check
    cout<<armstrong(num,digit);
    
} 
 