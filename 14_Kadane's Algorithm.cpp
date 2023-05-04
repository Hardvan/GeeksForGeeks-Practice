/*
Given an array Arr[] of N integers.
Find the contiguous sub-array(containing at least one number)
which has the maximum sum and return its sum.
*/

#include <iostream>

long long maxSubarraySum(int arr[], int n)
{
    long long max_so_far = INT_MIN; // Sum of the subarray with the maximum sum
    long long max_ending_here = 0;  // Sum of the subarray which ends at the current index

    for (int i = 0; i < n; i++)
    {
        // Add the current element to the sum
        max_ending_here += arr[i];

        // If the sum is greater than the maximum sum so far, update the maximum sum
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;

        // If the sum is negative, we don't need to consider it
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
}
