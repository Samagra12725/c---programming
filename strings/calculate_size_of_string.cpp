#include<iostream>
using namespace std;
int main()
{
    string s ="samagra jaiswal",ss;
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<size<<endl;

    ss="sky is blue";
    cout<<ss.length();
}