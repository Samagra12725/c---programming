#include <iostream>
using namespace std;
int main()
{
    int a[50],n;
    cout << "enter size of array:";
    cin >>n;
    for (int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    int target;
    cout<<"enter target sum";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
                cout<<"sum ="<<a[i]+a[j];
                break;
            }
        }
    }

}
