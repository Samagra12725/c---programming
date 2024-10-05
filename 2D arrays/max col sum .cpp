#include<iostream>
using namespace std;
int main()
{    
    int a[4][3];
    cout<<"enter elements of matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cin>>a[i][j];
        }
    }

    int index=0,sum = 0;
    for(int j=0;j<3;j++)
    {
        int total = 0;
        for(int i=0;i<4;i++)
        {
            total = total + a[i][j];
        }
        if(sum<total)
        {
            sum = total;
            index = j;
        }
    }

    cout<<index;
  
}