//FIRST AND LAST OCCRENCE OF ELEMETS IN SORTED ARRAY by linear search
#include<iostream>
using namespace std;
int main()
{
    int a[10000],n,i,j,L=-1,F=-1;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements in SORTED order"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter element to be checked for occurence:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            F=i;
            break;

        }

    }
    cout<<"first occurence = "<<F<<endl;
      for(int i=n-1;i>0;i--)
    {
        if(a[i]==key)
        {
            L=i;
            break;

        }

    }
     cout<<"last occurence = "<<L;

}