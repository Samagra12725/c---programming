//REVERSE OF ARRAY
#include<iostream>
using namespace std;
int main()
{
    int a[5] = { 1,2,3,4,5};
    
     int start = 0 ,end = 4;
   
    while(start < end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }


}