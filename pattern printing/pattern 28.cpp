#include<iostream>
using namespace std;
/*             1
             2 3
           4 5 6
         7 8 9 10
   11 12 13 14 15
  */
int main()
{
 int i,j,count=1;
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
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }
}
  
  
