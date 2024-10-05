#include<iostream>
using namespace std;
/*     1
      121
     12321
    1234321
   123454321*/
int main()
{
 int i,j;
  int n;
  cout<<"enter input number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    //space print
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    //1 to row(i)times
    for(j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    //row(i)-1 to 1 times
    for(j=i-1;j>=1;j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }
  /*    1
      1 2 1
    1 2 3 1 2
  1 2 3 4 1 2 3
1 2 3 4 5 4 1 2 3 4
*/
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
    for(j=1;j<=i-1;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }
  
  
}