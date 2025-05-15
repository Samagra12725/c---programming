#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={5,8,4,9,7,2};
    reverse(v.begin(),v.end());
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    reverse(v.begin()+1,v.begin()+3);
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}