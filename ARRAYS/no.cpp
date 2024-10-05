#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            int sq=a[i]*a[i];
            cout<<"square root of "<<a[i]<<" = "<<sq<<endl;
        }
        else{
            int cb=a[i]*a[i]*a[i];
            cout<<"cube root of "<<a[i]<<" = "<<cb<<endl;

        }
    }
}