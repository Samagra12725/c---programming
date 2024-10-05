//Divide subarray in two parts with equal sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int maxi = INT16_MIN , prefix=0,total_sum=0, n=arr.size();
    for(int i=0;i<n;i++)
    {
        total_sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        if(total_sum==2*prefix)
        return 1;
    }
    
}
int main()
{
    int n;
    cout<<"enter size of vector";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<divide(v);



}