#include<iostream>
using namespace std;
/*10 10 10 10 10 
  10 10 10 10 10
  10 10 10 10 10 
  10 10 10 10 10
  10 10 10 10 10......*/
int main()
{ 
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    }    

}