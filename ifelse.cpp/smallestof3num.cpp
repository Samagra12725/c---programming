#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers:";
    cin>>a>>b>>c;
    if(a<b&&a<c)
    {
        cout<<" a is smallest="<<a<<endl;

    }
    else{
        if(b<c)
        cout<<"b is smallest="<<b<<endl;
        else
        cout<<"c is smallest="<<c<<endl;

    }   
    
}   