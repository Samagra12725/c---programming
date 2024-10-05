#include<iostream>
using namespace std;
int square(int n)
{
    for(int i=1;i<n;i++)
    {
        int sq=sq*i;
        return sq;
        cout<<endl;
        
    }
}
int main()
{
    int x;
    cout<<"enter no of terms";
    cin>>x;
    cout<<square(x)<<endl;

}