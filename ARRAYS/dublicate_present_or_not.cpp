//FINDING DUBLICATE IN ARRAY
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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"dublicate found of "<<a[i]<<" at index = "<<j<<endl;
                break;

            }
        }
    }
}