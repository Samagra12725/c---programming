#include<iostream>
using namespace std;
/*a a a a a
  b b b b b
  c c c c c
  d d d d d
  e e e e e......*/
int main()
{ 
    char i,j,n;
    cout<<"enter n";
    cin>>n;;
    for(i='a';i<='e';i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }    

}