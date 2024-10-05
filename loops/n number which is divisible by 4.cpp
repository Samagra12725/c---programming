#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        cout<<i<<endl;
    }
}