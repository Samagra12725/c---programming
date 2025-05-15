#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s ="abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
     
    string s1 = "cab";
    prev_permutation(s1.begin(),s1.end());
    cout<<s<<endl;


}