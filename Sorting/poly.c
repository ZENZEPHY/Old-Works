#include <stdio.h>
#include <stdlib.h>
int i, j, k, m, n;
struct poly
{
    int coeff;
    int expo;
};
struct poly p1[20], p2[30], p3[30], p[30];

void display(struct poly p[], int size ,char string[20])
{
    printf("\nPolynomial %s:\n",string);
    for (i = 0; i < size - 1; i++)
    {
        printf("%dx^%d +", p[i].coeff, p[i].expo);
    }
    printf("%dx^%d", p[i].coeff, p[i].expo);
}
void main()
{
    printf("\nEnter the limit of the First polynomial");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the exponent:");
        scanf("%d", &p1[i].expo);
        printf("\nEnter the coefficient:");
        scanf("%d", &p1[i].coeff);
    }
    display(p1, n ,"First");

    printf("\nEnter the limit of the Second polynomial");
    scanf("%d", &m);
    for (j = 0; j < m; j++)
    {
        printf("\nEnter the exponent:");
        scanf("%d", &p2[j].expo);
        printf("\nEnter the coefficient:");
        scanf("%d", &p2[j].coeff);
        display(p2, m,"Second");
    }
    i = 0;
    j = 0;
    k = 0;
    while (i <= n && j <= m)
    {
        if (p1[i].expo > p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else if (p1[i].expo < p2[j].expo)
        {
            p3[k].coeff = p2[j].coeff;
            p3[k].expo = p2[j].expo;
            j++;
            k++;
        }
        else
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
    }
    while (i <= n)
    {
        p3[k].coeff = p1[i].coeff;
        p3[k].expo = p1[i].expo;
        i++;
        k++;
    }
    while (j <= m)
    {
        p3[k].coeff = p2[j].coeff;
        p3[k].expo = p2[i].expo;
        j++;
        k++;
    }
 display(p3,k-1,"Resultant");
 scanf("%d");
}