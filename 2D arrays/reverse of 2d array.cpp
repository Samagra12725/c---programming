#include<iostream>
using namespace std;
int main()
{
    /*            1 2 3
                  4 5 6 
                  7 8 9
                   */
    
    int a[3][3];
    cout<<"enter elements of matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cin>>a[i][j];
        }
    }
    // performing reversing
    for(int i=0;i<3;i++)
    {
        int start = 0,end = 2 ;
        while(start<end)
        {
            swap(a[i][start],a[i][end]);
            start++;
            end--;
        }
    }
    //printing array
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}        