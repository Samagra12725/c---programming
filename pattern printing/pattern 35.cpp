#include<iostream>
using namespace std;
/*      1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9 .... */
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
    for(j=1;j<=2*i-1;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
    
  }
}