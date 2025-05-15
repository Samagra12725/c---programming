#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    /*cout << *a << endl;
    cout << *a + 1 << endl;
    cout << *a + 2 << endl;
    cout << *a + 3 << endl;
    cout << *a + 4 << endl;*/

    for (int i = 0; i < 5; i++)
    {
        cout << *(a + i) << " ";
    }
}