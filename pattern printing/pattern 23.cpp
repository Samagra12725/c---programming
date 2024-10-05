#include<iostream>
using namespace std;
/*       A
       A B
     A B C
   A B C D 
 A B C D E */
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
    cout<<endl;
  
  }
  char k,l,c;
  cout<<"enter input corect character like A,B,C,D....";
  cin>>c;
  for(k='A';k<=c;k++)
  {
    for(l=1;l<=c-k;l++)
    {
    cout<<"  ";
    }
    for(l='A';l<=k;l++)
    {
      cout<<l<<" ";
    }
    cout<<endl;
  
  }
  
  
}