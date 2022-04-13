#include <stdio.h>

int MaxAndMin(int *arr, int **max, int **min)
{
    *max = arr, *min = arr; // arr==&arr[0]

    for (int i = 1; i < 5; i++)
    {
        *max = **max > arr[i] ? *max : &arr[i]; // *max==maxPtr, **max==*maxPtr
        *min = **min < arr[i] ? *min : &arr[i]; // *min==minPtr, **min==*minPtr
    }
}

int main()
{
    int *maxPtr, *minPtr;
    int arr[5] = {1, 2, 3, 4, 5};

    MaxAndMin(arr, &maxPtr, &minPtr);

    printf("Max = %d\n", *maxPtr);
    printf("Min = %d\n", *minPtr);

    return 0;
}