/*
Given an array of size N-1 such that it
only contains distinct integers
in the range of 1 to N.
Find the missing element.
*/

#include <vector>

using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    // Sum of first n natural numbers
    int a = n * (n + 1) / 2;

    // Sum of all elements in the array
    int sum = 0;
    for (const auto &x : array)
        sum += x;

    return a - sum;
}
