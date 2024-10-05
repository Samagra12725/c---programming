#include<iostream>
using namespace std;
int main()
{ 
  int i,j;
  int n;
  cout<<"enter input number";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(int j=5;j>=i;j--)
    {
        cout<<j;
    }
    cout<<endl;
  }
}