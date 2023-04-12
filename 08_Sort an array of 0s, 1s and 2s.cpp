void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n - 1;
    while (mid <= end)
    {
        if (a[mid] == 0)
        {
            // Push to front
            swap(&a[start], &a[mid]);

            start++;
            mid++;
        }

        else if (a[mid] == 1)
        {
            mid++;
        }

        else if (a[mid] == 2)
        {
            // Push to back
            swap(&a[mid], &a[end]);

            end--;
        }
    }
}