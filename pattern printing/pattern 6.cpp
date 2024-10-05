#include<iostream>
using namespace std;
/*5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1 .......*/
int main()
{ 
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }    

}