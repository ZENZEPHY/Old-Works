#include <stdio.h>
#include <stdlib.h>
int a[10][10], s[10][10];

void main()
{
    int r, c;
    int i, j;
    printf("Enter the number of rows");
    scanf("%d", &r);
    printf("Enter the number of columns");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0 ; j < c; j++)
        {
            printf("Enter the elements of Matrix");
            scanf("%d", &a[i][j]);
        }
    }
    printf("INSERTED MATRIX IS ");
    for (i = 0; i < r; i++)
    {
        for (j = 0 ; j < c; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    s[0][0]=r;
    s[0][1]=c;
    int k=0;
    
    for (i = 0; i < r; i++)
    {
        for (j = 0 ; j < c; j++)
        {
            if(a[i][j]!=0)
            {
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }
    s[0][2]=k;

    printf("Sparse Matrix:\n");
    for (i = 0; i < k + 1 ; i++)
    {
        for (j = 0 ; j < 3; j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    scanf("%d");
}
