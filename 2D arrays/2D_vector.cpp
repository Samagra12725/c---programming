#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<vector<int> >v(3,vector<int>(4,122));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<v[i][j]<<"  ";

        }       
    }
    cout<<endl;

    cout<<"rows "<<v.size()<<endl;
    cout<<"col "<<v[0].size();
}