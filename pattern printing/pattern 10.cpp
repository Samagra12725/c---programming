#include<iostream>
using namespace std;
/*f g h i j k
  f g h i j k
  f g h i j k
  f g h i j k
  f g h i j k......*/
int main()
{ 
    char i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j='f';j<='k';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }    

}