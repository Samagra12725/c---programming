#include<iostream>
using namespace std;
int main()
{
    int d;
    cout<<"enter no of days";
    cin>>d;
    if(d<=5)
    cout<<"fine is 1 rupees";
     else if(d<=10)
      cout<<"fine is 5 rupees";
       else if(d<=30)
        cout<<"fine is 10 rupees";
          else 
            cout<<"membership will be canceled"; 
}