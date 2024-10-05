#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //declare vector
    vector<int>v;
    vector<int>v1(6,1);
    // size and capacity
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
      cout<<"size of:"<<v.size()<<endl;
    cout<<"capacity of:"<<v.capacity()<<endl;

     // update values
     v1[1]=7;
     v1.push_back(8);
       cout<<"size of:"<<v1.size()<<endl;
    cout<<"capacity of:"<<v1.capacity()<<endl;

    // delete value from vector
    vector<int>v2;
    v2.push_back(22);
    v2.push_back(21);
    v2.push_back(28);
    v2.push_back(27);

     cout<<"size of:"<<v2.size()<<endl;
    cout<<"capacity of:"<<v2.capacity()<<endl;
    for(int i=0;i<v2.size();i++)
        for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";

   
    v2.erase(v2.begin()+2);
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";



   

}