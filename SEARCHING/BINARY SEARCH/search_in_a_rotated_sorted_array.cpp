// SEARCH IN A ROTATED SORTED ARRAY
#include <iostream>
using namespace std;
int main()
{
    int start = 0, n, end = n - 1, mid, ans, nums[10000000], i;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements in SORTED order" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    while (start <= end)
    {
        mid = (start + end) / 2;
        // left side sorted
        if (nums[mid] >= nums[0])
            start = mid + 1;
        // right side sorted
        else
        {
            ans = nums[mid];
            end = mid - 1;
        }
    }
    cout << ans;
}