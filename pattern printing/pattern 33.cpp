#include<iostream>
using namespace std;
/*     #
      # #
     # # #
    # # # #
  # # # # # #
  # # # # # #
    # # # #
     # # #
      # # 
       #.....*/
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
      cout<<"* ";
    }
    cout<<endl;
  }
    //next below row
    
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    {
    cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  
}


}
