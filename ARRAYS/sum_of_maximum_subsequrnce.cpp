#include<iostream>
using namespace std;
int main()
{
    int a[10]={90,10,-6,87,-1,92,13,-2,49,59};
    int n=10,sum=0,max_sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            sum += a[i];
        }
        else{
            max_sum = max(max_sum,sum);
            sum = 0;
        }
        max_sum = max(max_sum,sum); 
    }
    cout<<"maximum sum =  "<<max_sum;
}