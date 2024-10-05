#include<iostream>
using namespace std;
/*       #
       # # #
     # # # # # 
  # # # # # # # # 
 # # # # # # # # #....*/
int main()
{ int i,j;
  int n;
  cout<<"enter input number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=2*i-1;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
    //CODE FOR 1,222,33333 LIKE
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=2*i-1;j++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
    //CODE FOR 1,123,12345
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=2*i-1;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
    

}