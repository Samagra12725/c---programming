#include<iostream>
using namespace std;
/*10 
  10 11
  10 11 12 
  10 11 12 13 
  10 11 12 13 14......*/
int main()
{ 
    int i,j;
    for(i=10;i<=16;i++)
    {
        for(j=10;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}