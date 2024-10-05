#include<iostream>
using namespace std;
int main()
{
               /* 1 2 3
                  4 5 6 
                  7 8 9
                  10 11 12 */
    
    int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int index=0,sum = 0;
    for(int i=0;i<4;i++)
    {
        int total = 0;
        for(int j=0;j<3;j++)
        {
            total = total + a[i][j];
        }
        if(sum<total)
        {
            sum = total;
            index = i;
        }
    }

    cout<<index;
  
}