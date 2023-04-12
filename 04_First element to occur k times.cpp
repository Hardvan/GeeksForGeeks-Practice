int firstElementKTime(int a[], int n, int k)
{
    int H[200] = {0}; // Hash Map
    int i;

    for (i = 0; i < n; i++)
    {
        H[a[i]]++;
        if (H[a[i]] == k)
            return a[i];
    }

    return -1;
}