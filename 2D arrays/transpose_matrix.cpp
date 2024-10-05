#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=16;
    /*int ar[3][3];
     for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
          cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
     for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
          ar[i][j]=a[j][i];
        }
    }

    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
          cout<<ar[i][j]<<" ";
        }
    }*/


    // BY using O(1) space and O(n^2) time

    for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
        {
          cout<<a[i][j]<<" ";
        }
    }

    
}    