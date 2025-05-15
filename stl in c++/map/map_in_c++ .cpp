#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    m["tv"] = 120;
    m["laptop"] = 50;
    m["headphone"] = 45;
    m.insert({"camera" ,60});
    m.emplace("refrigerator",78);
    m.erase("headphone");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.count("tv")<<endl;
    cout<<m["refrigerator"]<<endl;
    if(m.find("camera") !=m.end()){
        cout<<"found";
    }
     
    
}