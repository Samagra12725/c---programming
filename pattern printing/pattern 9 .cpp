#include<iostream>
using namespace std;
/*a b c d e
  a b c d e
  a b c d e
  a b c d e
  a b c d e......*/
int main()
{ 
    char i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j='a';j<='e';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }    

}