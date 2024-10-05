#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    char a[26];
    for(int i=0;i<26;i++)
    {
      a[i] = 'A' + i;
    }
    //print char
    for(int i=0;i<26;i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}