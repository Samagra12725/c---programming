#include<iostream>
using namespace std;
int main()
{
    int a[10] = {1,1,2,2,3,3,4,4,5,6};
    int j=1;
    for(int i=1;i<10;i++)
    {
        if(a[i]!=a[i-1])
        
        {
            a[j]=a[i];
            j++;
        }
    }
    
    cout<<j<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}