//NUMBER OF OCCURENCE OF ELEMENTS A IN ARRAY
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],n,i,x;
    cout<<"enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        int ans;
	    int  count = 0;
        cout<<"enter key:";
        cin>>x;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        count++;
	    }
	    ans = count;

    cout<<ans;
}