#include<iostream>
using namespace std;
/*     1
      12
     123
    1234
   12345*/
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
    for(j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
  
}