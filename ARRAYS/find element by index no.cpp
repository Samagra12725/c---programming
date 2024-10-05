//FIND ELEMENT BY GIVE INDEX no 
#include<iostream>
using namespace  std;
int main()
{
    int a[50],n,i;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int index = -1;
    cout<<"enter index no to get element of that index no :"<<endl;
    cin>>index;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[index])
        {
            cout<<a[i];
            break;
        }
        else if(index>n || index<-1 )
        {
            cout<<"enter correct index:";
            break;
        }
    }
}
