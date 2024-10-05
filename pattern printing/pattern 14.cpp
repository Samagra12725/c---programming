#include<iostream>
using namespace std;
/*a 
  b b 
  c c c 
  d d d d 
  e e e e e......*/
int main()
{ 
    char i,j;
    for(i='a';i<='z';i++)
    {
        for(j='a';j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    } 
    


}