#include<iostream>
using namespace std;
int main()
{
    int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;

    // Column wise
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<4;i++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;

    //finding element in 2d array
      for(int j=0;j<3;j++)
    {
        for(int i=0;i<4;i++)
        {
            if(a[j][i]==7)
            cout<<"mil gaya";
            break;
        }
    }

    

   
}