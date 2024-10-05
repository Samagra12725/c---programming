/*Find the index of a specific element in an array .
if the element is nor present print 1, 
ask the size of the array from the user and then implement it*/
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],size;
    cout<<"enter size of array:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"enter the elements to search the index:";
    cin>>target;

    int index ;
    for(int i=0;i<size;i++)
    {
        if(a[i]==target)
        {
        index = i;
        break;
        }
    }
    if(index!=-1)
    {
        cout<<"enter present element "<<index<<endl;

    }
    else
    {
        cout<<index<<endl;
    }
    return 0 ;

}