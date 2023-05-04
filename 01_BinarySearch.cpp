int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int middle;
    while (start <= end)
    {
        middle = start + (end - start) / 2; // ? To prevent overflow
        if (k == arr[middle])
            return middle;
        else if (k > arr[middle])
            start = middle + 1;
        else
            end = middle - 1;
    }

    return -1;
}
