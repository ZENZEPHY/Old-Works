#include <stdio.h>
#include <stdlib.h>

int n,a[20];

void insert()
{
    int i;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    printf("Enter the Data to be inserted\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int part(int l,int r,int a[20])
{
    int i,j;
    int pivot = a[l];

    for(i=0;i<=j;i++)
    {
        i=l;
        j=r;
        while(pivot>=a[i] && i<=r)
        {
            i++;
        }
        while(pivot<a[j])
        {
            j--;
        }
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
        else
        {
            swap(&a[l],&a[j]); 
        }
    }
    return j;
}

void quicksort(int l,int r,int a[20])
{
    if(l<r)
    {
        int q = part(l,r,a);
        quicksort(l,q-1,a);
        quicksort(q+1,r,a);
    }
}

void display(int arr[20])
{
    int i;
  for(i=0;i<n;i++)
    {
      printf("%d\t",arr[i]);  
    }  
}

void main()
{
    insert();
    quicksort(0,n-1,a);
    display(a);
}