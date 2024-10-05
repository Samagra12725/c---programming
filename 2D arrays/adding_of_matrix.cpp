#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={1,2,3,4,5,6,8,9,7,2,11,4};
    int b[3][4]={5,4,8,9,6,7,3,1,5,8,10,20};
    int c[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<c[i][j]<<" ";
        }
    }

}