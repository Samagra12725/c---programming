//ARMSTRONG NUMBER 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,count=0,ans=0,rem,x;     //x is original number
    cout<<"enter number to check:";
    cin>>num;
    x=num;
    while(x!=0)
    {
        x = x/10;
        count++;
      
    }
      x = num;

    while(x!=0)
    {
       rem = x%10;
       x = x/10;
       ans = ans + pow(rem,count);
    }

    if(ans==x)
    {
      cout<<"IT IS ARMSTRONG NUMBER:";
    }
    else{
      cout<<"IT IS NOT ARMSTRONG NUMBER:";  
    }
}
