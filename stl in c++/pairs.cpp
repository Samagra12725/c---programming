#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int,string> p={1,"samagra"};
    cout<<p.first<<" "<<p.second<<endl;

    // pair of pair
    pair<int,pair<int , char>> p1={2,{2,'a'}};
    cout<<p1.first<<endl;
    cout<<p1.second.first<<" "<<p1.second.second<<endl;

    //vector of pairs
    
    vector<pair<int,int>> vec={{1,2},{4,5},{7,8}};
    vec.push_back({1,12}); // insert
    vec.emplace_back(78,98); // in place objects create
    for(auto p:vec)
    {
         cout<<p.first<<" "<<p.second<<endl;

    }



}