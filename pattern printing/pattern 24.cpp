#include<iostream>
using namespace std;
/*      1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1  */
int main()
{
 int i,j;
  int n;
  cout<<"enter input number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=i;j>=1;j--)
    {
       
      cout<<j<<" ";
    
    }
    cout<<endl;
  }
}