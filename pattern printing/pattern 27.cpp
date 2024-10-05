
#include<iostream>
using namespace std;
/*       E
       E D
     E D C
   E D C B 
 E D C B A */
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
      ch='Z'-(j-1);
      cout<<ch<<" ";
    }
    cout<<endl;
  
  }
}
  