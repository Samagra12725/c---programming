#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;
    m.emplace("tv", 10);
    m.emplace("tv", 120);
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}