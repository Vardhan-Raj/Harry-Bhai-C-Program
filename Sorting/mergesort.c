#include <stdio.h>
// code for merging technique
void merge(int arr[], int lb, int m, int ub)
{
    int i, j, k;
    int n1 = m - lb + 1;
    int n2 = ub - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[lb + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0, j = 0, k = lb;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
// merge sort definition
void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int m = lb + (ub - lb) / 2;

        mergeSort(arr, lb, m);
        mergeSort(arr, m + 1, ub);

        merge(arr, lb, m, ub);
    }
}
// main method
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    mergeSort(arr, 0, size - 1);
    printf("Sorted array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}