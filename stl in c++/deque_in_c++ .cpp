#include<iostream>
#include<deque>
using namespace std;
int main()
{
   deque<int> d={1,2,3,4,5};
   d.push_back(1);
   d.pop_back();
   d.pop_front();
   d.push_front(2);
   for(int val:d)
   {
    cout<<val<<" ";
   }
}