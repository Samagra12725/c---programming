#include<iostream>
using namespace std;
int main()
{    
    int a[3][3];
    cout<<"enter elements of matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cin>>a[i][j];
        }
    }
    
    for(int j=0;j<3;j++)
    {
        int sum = 0;
        
        for(int i=0;i<3;i++)
        {
            sum = sum+a[i][j];
        }
         cout<<"sum of "<<j<<" th column is "<<sum<<endl;
    }
}