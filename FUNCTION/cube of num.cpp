#include<iostream>
using namespace std;
int cube(int n)
{
    int cube=n*n*n;
    return cube;
}
int main()
{
    int x;
    cout<<"enter numbert:";
    cin>>x;
    cout<<cube(x);
    
}
