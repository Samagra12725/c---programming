#include<iostream>
using namespace std;
int main()
{
    //Given a binary array nums, return the maximum number of consecutive 1's in the array.
    int ar[10]={1,0,0,1,1,1,1,0,1,0};
    int count = 0,maxi = 0;
    int n=10;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            count++;
        }
        else{
            maxi = max(count,maxi);
            count = 0;
        }
        maxi = max(count,maxi);
    }

    cout<<maxi;
}
