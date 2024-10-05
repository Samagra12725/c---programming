#include <iostream>
#include <vector>
using namespace std;
//optimised approach 
// complexity = O(n) 

vector<int> pair_sum(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size();
    int i = 0, j = n;
    while (i < j)
    {
        int pairsum = arr[i] + arr[j];
        if (pairsum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (pairsum < target)
            i++;
        else
            j--;
    }

    return ans;
}

int main()
{
    vector<int> v = {1,2,3,4,5}; 

    vector<int> ans = pair_sum(v,8);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;

}