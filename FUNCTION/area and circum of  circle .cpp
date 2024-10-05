#include<iostream>
using namespace std;
float area(float r) 
{
    int ar;
    ar=3.14*r*r;
    return ar;
}
float circumference(float r) 
{
    float circum;
    circum = 2*3.14*r;
    return circum;
}
int main()
{
    float x;    //x is radius
    cout<<"enter radius:";
    cin>>x;
    cout<<" area of circle = "<<area(x)<<endl;
    cout<<" circumference of cicle = "<< circumference(x);
}
