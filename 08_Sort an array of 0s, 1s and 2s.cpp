void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int start = 0;
    int mid = 0; // mid is the current element
    int end = n - 1;
    while (mid <= end)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[start], &a[mid]);
            start++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(&a[mid], &a[end]);
            end--;
            break;
        }
    }
}