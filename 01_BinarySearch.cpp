int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int middle;
    while (start <= end)
    {
        middle = start + (end - start) / 2;
        if (arr[middle] == k)
            return middle;
        else if (arr[middle] > k)
            end = middle - 1;
        else
            start = middle + 1;
    }

    return -1;
}
