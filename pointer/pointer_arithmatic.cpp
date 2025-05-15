#include<iostream>
using namespace std;
int main()
{

    /*// increment operator
    int a= 10;
    int* ptr = &a;
    cout<<ptr<<endl; //0x61ff08
    ptr ++;
    cout<<ptr<<endl;  //0x61ff0c this is addres of after 4bytes adds */


    // decrement operator

   int a= 10;
    int* ptr = & a;
    cout<<ptr<<endl; //0x61ff08
    ptr --;
    cout<<ptr<<endl;  //0x61ff04 this is addres of after 4bytes subtracted
    ptr = ptr - 2;
    cout<<ptr<<endl; //0x61ff04


}