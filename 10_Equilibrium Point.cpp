/*
Given an array A of n positive numbers.
The task is to find the first Equilibrium Point in an array.
Equilibrium Point in an array is a position such that
the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)
*/

int equilibriumPoint(long long a[], int n)
{
    int leftSum = 0;
    int rightSum = 0;
    int i;

    for (i = 0; i < n; i++)
        rightSum += a[i];

    for (i = 0; i < n; i++)
    {
        rightSum -= a[i];

        if (leftSum == rightSum)
            return i + 1;

        leftSum += a[i];
    }

    return -1;
}
