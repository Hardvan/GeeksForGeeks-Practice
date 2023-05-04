#include <vector>

using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long target)
{
    vector<int> res;

    // Target sum is 0
    if (target == 0)
    {
        res.push_back(-1);
        return res;
    }

    int left = 0;
    int right = 0;
    long long sum = 0;

    while (right < n)
    {
        sum += arr[right];

        while (sum > target && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == target)
        {
            res.push_back(left + 1);
            res.push_back(right + 1);
            return res;
        }

        right++;
    }

    res.push_back(-1);
    return res;
}