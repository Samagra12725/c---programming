// third smallest  element in array
#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main()
{
    int a[50],n,i;
    cout<<"enter size of array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
     int smallest = INT_MAX;
     int secondsmallest  = INT_MAX;
     int thirdsmallest = INT_MAX;
     //SMALLEST ELEMENT
     for(i=0;i<n;i++)
     {
        if(a[i]<smallest)
       smallest = a[i];
     }
     cout<<"smallest element = "<<smallest<<endl;
     
     //SECOND SMALLEST
     for(i=0;i<n;i++)
     {
        if(secondsmallest>a[i]&&a[i]!=smallest)
        secondsmallest = a[i];
     }
     cout<<"second smallest element = "<<secondsmallest<<endl;

     // THIRDSMALLEST
     for(i=0;i<n;i++)
     {
        if(thirdsmallest > a[i] && a[i]!= smallest && a[i]!= secondsmallest)
        thirdsmallest = a[i];
     }
     cout<<"third smallest element = "<<thirdsmallest;
   
   
}  
