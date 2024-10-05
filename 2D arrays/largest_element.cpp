#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int lar = 0;
    cout<<"enter matrix 1";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    // finding largest
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++)
        {
          if(a[i][j]>a[i+1][j+1])
          {
            lar = a[i][j];
          }
        }
    }

    cout<<lar<<" ";

}