#include <stdio.h>
int i, j, k = 0, b[10], mid, size = 6;
int a[10] = {30, 20, 10, 50, 60, 40};
void merge(int l, int mid, int r, int a[30])
{
    i = 0;
    j = mid + 1;
    int temp[50];
    int k = 0;
    while (i <= mid && j <= r)
    {
        if (a[j] < a[i])
        {
            temp[k] = a[j];
            j++;
            k++;
        }
        else
        {
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for(i=0;i<=r;i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int l, int r, int a[])
{
    if (l < r)
    {
        mid = (l + r) / 2;
        mergeSort(l, mid, a);
        mergeSort(mid + 1, r, a);
        merge(l, mid, r, a);
    }
}

void main()
{
    mergeSort(0, size - 1, a);
    printf("\nTHE SORTED ARRAY IS:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
