#include<iostream>
using namespace std;
/*     1
      22
     333
    4444
   55555*/
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
    cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
      cout<<i;
    }
    cout<<endl;
  
  }
  
}