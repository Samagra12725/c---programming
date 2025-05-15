#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m.emplace("tv", 10);
    m.emplace("tv", 120);
    m.emplace("refrigerator",7);
    m.emplace("watch",8);
    m.emplace("soap",98);
    for (auto p : m)
    {
       cout << p.first << " " << p.second << endl;
    }

}