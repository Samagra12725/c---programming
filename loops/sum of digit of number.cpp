#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"enter a number:";
    cin>>n;

   while(n>0)
   { 
     // remainder = digit of a number
     rem=n%10; 
     n=n/10;
     sum+=rem;
   }
   
    cout<<sum<<endl;
}