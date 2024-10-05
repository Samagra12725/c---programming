#include<iostream>
using namespace std;
int main()
{
    char opd;
    float a,b;
    cout<<"enter both num:";
    cin>>a>>b;
    cout<<"enter operator";
    cin>>opd;
    switch(opd)
    {
        case '+':
        cout<<"addtion="<<a+b<<endl;
        break;

        case '-':
        cout<<"subtraction="<<a-b<<endl;
        break;
        
        case '*':
        cout<<"multiplication="<<a*b<<endl;
        break;

        case '/':
        cout<<"divsion="<<a/b<<endl;
        break;

        default:
        cout<<"enter correct operator";
    }

}
