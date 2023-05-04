/*
arr[0] < arr[1] > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]
*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void zigZag(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        else
        {
            if (arr[i] < arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}
