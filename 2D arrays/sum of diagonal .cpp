#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j;
    cout << "enter elements of matrix";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    i=0;
    int first=0;
    while(i<3)
    {
        first+= a[i][i];
        i++;
    }
    cout<<"sum of 1st diagonal's "<<first<<endl;

    // calculating sum of 2nd diagonal

     i=0,j=2;
     int second = 0;

    while(j>=0)
    {
        second+= a[i][j];
        i++,j--;
    }
    cout<<"sum of 2nd disgonal's "<<second<<endl;


}    
    