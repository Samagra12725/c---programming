#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;
    cout<<"enter length and breadth";
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"perimeter = "<<perimeter<<endl;
    cout<<"area = "<<area;
    return 0;

}