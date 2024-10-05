#include <iostream>
using namespace std;
int main()
{
    int a[10000], n, i, FO, LO;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements in decresing order" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "enter element to be searched:" << endl;
    cin >> key;
    int start = 0;
    int end = n - 1;
    // FIRST OCCURENCE
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            FO = mid;
            end = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // LAST OCCURENCE
    start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            LO = mid;
            start = mid + 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "FO " << FO << endl;
    cout << "LO " << LO << endl;

    int NO = LO - FO + 1;

    cout << "no of occurence of " << key << " = " << NO;
}