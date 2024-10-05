#include<iostream>
using namespace std;
/*       A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A */
int main()
{
 int i,j,n;
  char ch;
  cout<<"enter input number like 1,2,3,4.....";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=i;j++)
    {
      ch='A'+j-1;
      cout<<ch<<" ";
    }
    for(j=i-1;j>=1;j--)
    {
        ch='A'+j-1;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
  
  
  
}