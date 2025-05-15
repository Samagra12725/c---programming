#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int* ptr = &x;
    int** ptr2 = &ptr;

    cout << x << endl;
    cout<<**ptr2<<endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *(ptr) <<"6"<< endl;
    cout << ptr2 << endl;
    cout << &ptr2 << endl;
    cout << *(ptr2) << endl;
    cout << **(ptr2) << endl;

    *ptr = 20;
    cout<<x<<endl;

    // NULL POINTER

    int* x1 = NULL;
    cout<<x1;
}

