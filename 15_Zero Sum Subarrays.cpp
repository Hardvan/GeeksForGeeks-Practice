#include <vector>
#include <unordered_map>

using namespace std;

/*
You are given an array arr[] of size n.
Find the total count of sub-arrays having their sum equal to 0.
*/

long long int findSubarray(vector<long long int> &arr, int n)
{
    // Initialize variables
    unordered_map<int, int> H;
    int count = 0, sum = 0;

    // Iterate through array and update prefix sum frequency
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // If the prefix sum is 0, increment count
        if (sum == 0)
            count++;

        // If the prefix sum is already present in the map
        // it means that there is a sub-array whose sum is equal to the
        // difference between the current prefix sum and some previous prefix sum.
        if (H.find(sum) != H.end())
            count += H[sum];

        H[sum]++;
    }

    return count;
}