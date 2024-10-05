#include<iostream>
using namespace std;
int main()
/*  1 2 3 4 5
    6 7 8 9 10 
    11 12 13 14
    15 16 17 18 ....*/
{
    int i,j,count = 1,n;
    cout<<"enter n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<" "<<count;
            count++;
        }
        cout<<endl;

    }
}