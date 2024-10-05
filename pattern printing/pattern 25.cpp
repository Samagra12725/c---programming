#include<iostream>
using namespace std;
/*       A
       B B
     C C C
   D D D D 
 E E E E E */
int main()
{
 int i,j,n;
  char ch;
  cout<<"input number ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<"  ";
    }
    for(j=1;j<=i;j++)
    {
       ch='A'+i-1;
       cout<<ch<<" "; 
    }

    cout<<endl;
  }
} 
  
  