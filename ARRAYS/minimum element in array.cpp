///FINDING MINIMUM ELEMENTS IN ARRAY
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[7]={14,54,78,11,45,12,9};
    int ans = a[0];
    //min value
    for(int i=1;i<7;i++)
    {
        if(a[i]<ans)
        ans = a[i];
    }
    cout<<ans;
}  