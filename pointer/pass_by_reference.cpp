#include<iostream>
using namespace std;

/*void changeA(int* ptr){ // changed the value of a using pointers

    *ptr = 20;
}
int main()
{
    int a = 10;

    changeA(&a);

    cout<<"inside main fnx:  "<<a <<endl;
}*/

// pass by reference using alias

void changeA(int &b){ // changed the value of a using alias     

    b = 20;
    cout<<&b<<endl;
}
int main()
{
    int a = 10;

    changeA(a);

    cout<<"inside main fnx:  "<<a <<endl;

    cout<<&a<<endl;

 
}