#include<iostream>
using namespace std;
int main()
{
    int a[4][3]={1,2,3,4,5,6,7,8,9,10,12,3};
    int sum = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum = sum+a[i][j];
        }
    }
   cout<<sum;
    
}