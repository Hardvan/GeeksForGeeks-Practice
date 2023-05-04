/*
You are given two arrays, A and B, of equal size N.
The task is to find the minimum value of
A[0] * B[0] + A[1] * B[1] + .... + A[N-1] * B[N-1]
where shuffling of elements of arrays A and B is allowed.
*/

#include <iostream>
#include <algorithm>

using namespace std;

long long int minValue(int a[], int b[], int n)
{
    // Sort both arrays
    sort(a, a + n);
    sort(b, b + n);

    long long res = 0;
    for (int i = 0; i < n; i++)
        res += a[i] * b[n - i - 1]; // Multiply the smallest with the largest

    return res;
}
