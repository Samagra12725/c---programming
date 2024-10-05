#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,y1,x2,y2,rad;
    float d;
    cout<<"enter points of thr circle";
    cin>>x1>>y1>>x2>>y2;
    cout<<"enter radius";
    cin>>rad;
    sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(d>rad)
    {
        cout<<"outside the circle";
    }
    else if(d<rad)
    {
        cout<<"lies inside the circle";
    } 
    else
       cout<<"point lies in the origin";
   


    

}