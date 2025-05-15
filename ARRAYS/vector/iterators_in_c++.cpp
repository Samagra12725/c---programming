#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    // IN REVERSE ORDER

    vector<int>::reverse_iterator j;
    for (j = v.rbegin(); j != v.rend(); j++)
    {
        cout << *(j) << " ";
    }
    cout << endl;

    // using auto keyword

    for (auto j = v.rbegin(); j != v.rend(); j++)
    {
        cout << *(j) << " ";
    }
    cout << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;
}