#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   // sorting array using sort function
    int a[5]={8,1,5,6,9};
    sort(a,a+5);
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //sorting array using sort function with functor
    sort(a,a+5,greater<int>());
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // sorting of vector 

    vector<int> v={5,8,4,9,7,2};
    sort(v.begin(),v.end(),greater<int>());
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    // sorting pair of vector
    vector<pair<int, int>> vec={{1,2},{3,5},{8,9},{4,5}};
    sort(v.begin(),v.end());
    for(auto p:vec)
    {
        cout<<p.first<<" "<< p.second<<" "<<endl;
    }
    cout<<endl;





}
