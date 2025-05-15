#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ="daabcbaabcbc";
    string p ="abc";
   // cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        s.find(p);
        s.erase(p.begin(),p.end());
    }

    cout<<s<<endl;

}