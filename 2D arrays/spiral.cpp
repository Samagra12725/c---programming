//leetcode medium level question
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int a[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int top = 0, bottom = 4, left = 0, right = 4;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            ans.push_back(a[top][j]);
           // cout << a[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
           // cout << a[i][right] << " ";
           ans.push_back(a[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                //cout << a[bottom][j] << " ";
                ans.push_back(a[bottom][j]);
                
            }
        }
        bottom--;

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
               // cout << a[i][left] << " ";
               ans.push_back(a[i][left] );
            }
            left++;
        }
    }
    
    //printing int 1d array
    for(int x=0;x<ans.size();x++)
    {
        cout<<ans[x]<<" ";
    }
    cout<<endl;

    // printing in 2d array
    int arr[5][5];
    int s=0;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<5;j++)
        {
          arr[i][j]=ans[s++];
        }
    }

    for(int i=0;i<5;i++)
    {
       for(int j=0;j<5;j++)
        {
          cout<<arr[i][j]<<" ";
        }
    }

    
}