#include <vector>

using namespace std;

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    vector<int> res;
    int left = 0;
    int right = 0;
    long long sum = 0;

    // Target sum is 0
    if (s == 0)
    {
        res.push_back(-1);
        return res;
    }

    while (right < n)
    {
        sum += arr[right];

        while (sum > s && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == s)
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