//program to check given temperature is suitable for swimming or not

#include<iostream>
using namespace std;
int main()
{
    int temp;//in farenhiet
    cout<<"enter temprature in farenhiet:";
    cin>>temp;
    if(temp>70&&temp<90)
    {
        cout<<"yes";
    }
    else
       cout<<"no";
}