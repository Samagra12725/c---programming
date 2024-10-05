#include <iostream>
using namespace std;
int main()
{
    // 0,1,1,2,3,5,8,13,21.......
    int a = 0, b = 1, next, n, i;
    cout << "enter number of terms " << endl;
    cin >> n;
    if (n <= 0)
        cout << "enter positive number";
    else if (n == 1)
        cout << a;
    else
        cout << a << " " << b;

    for (i = 3; i <= n; i++)
    {
        next = a + b;
        cout << " " << next;
        a = b;
        b = next;
    }
}
