#include<iostream>
using namespace std;
/*1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5 .......*/
int main()
{ 
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }    

}