//program to check given num is even or positive both
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    if(num%2==0&&num>0)
    cout<<"it is even and positive both:\n";
    else 
    cout<<"It is not";


    if(num%2==0)
      cout<<"it is even:\n";
    else if(num>0)
      cout<<"it is positive\n";
       else
         cout<<"it is not even or positive:\n";
      
    
}