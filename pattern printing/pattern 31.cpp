#include<iostream>
using namespace std;
/* # # # # # # # # # 
     # # # # # # #
       # # # # #
         # # #
           #....*/
int main()
{ int i,j;
  int n;
  cout<<"enter input number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i-1;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=((2*n-1)-(2*i-1))+1;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
   
  }
      //APPROACH 2..
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=((2*n-1)-(2*i-1))/2;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=2*i-1;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}