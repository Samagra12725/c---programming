#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter day";
    cin>>day;
    switch(day)
    {  // cout<<"here let first day is monday";
        case 1:
        cout<<"day=monday";
        break;

        case 2:
        cout<<"day=tuesday";
        break; 

        case 3:
        cout<<"day=wednesday";
        break;

        case 4:
        cout<<"day=thursday";
        break;

        case 5:
        cout<<"day=friday";
        break;

        case 6:
        cout<<"day=saturday";
        break;

        case 7:
        cout<<"day=sunday";
        break;

        default:
        cout<<"enter correct case";
     
    }

}
