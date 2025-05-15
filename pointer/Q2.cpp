#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40};
    int *ptr = a;
    cout<<*(ptr+1)<<endl;  // 20
    cout<<*(ptr+3)<<endl; //40
    ptr++;
    cout<<*ptr<<endl; //20

}