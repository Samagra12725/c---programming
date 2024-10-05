#include<iostream>
using namespace std;
/*
  A
  A B
  A B C
  A B C D
  A B C D E......*/
int main()
{ 
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    } 
    


}