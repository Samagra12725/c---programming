#include<iostream>
using namespace std;
int main()
{
    /*int x = 10;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;*/

// pointer to pointer

int x = 10;
    int* ptr = &x;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<ptr3<<endl;
    cout<<&ptr3<<endl;


}