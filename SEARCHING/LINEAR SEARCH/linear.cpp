//search the element in array and give index num of that element
#include<iostream>
using namespace std;
int main()
{
    int target,a[10],size;
    cout<<"enter size of array:";
    cin>>size;
    cout<<"enter elemts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int index;
    cout<<"enter elemnts to be searched:";
    cin>>target;
    for(int i=0;i<size;i++)   
    {
        if(a[i]==target)
        {
        index = i;
        break;
        }
    }
    cout<<index;



}