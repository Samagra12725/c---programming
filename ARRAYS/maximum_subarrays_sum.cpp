#include<iostream>
using namespace std;
//BRUTE FORCE APP
int main()
{        
    int a[7]={3,-4,5,4,-1,7,-8};
    int n=7,maxi = 0;
    for(int st=0;st<n;st++)
    {  
         int sum=0;

        for(int end=st;end<n;end++)
        {
            sum+=a[end];
            maxi=max(maxi,sum);
            
        }
    }
    cout<<"maximum subarray sum = "<<maxi<<endl;

//USING KADANE ALGOr
int currsum=0,maxsum=0,i;
for(i=0;i<n;i++)
{
    currsum += a[i];
    maxsum = max(maxsum,currsum);

    if(currsum<0)
    currsum=0;
}
cout<<maxsum;
}


