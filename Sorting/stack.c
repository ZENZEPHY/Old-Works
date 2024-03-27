#include <stdio.h>
#include <stdlib.h>
int a[10];
int top = -1, n, ch;

void push()
{
    if (top == n - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top = top + 1;
        printf("\nEnter element to be pushed: ");
        scanf("%d", &a[top]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped Element is: %d", a[top]);
        top--;
    }
}

void display()
{
    int i = top;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nElements in the stack are in the order -> ");
        while (i>= 0)
        {
            printf("%d\t", a[i]);
            i--;
        }
    }
}
void main()
{
    printf("\nEnter the limit of the stack");
    scanf("%d", &n);
    do
    {
        printf("Enter the option: 1)push 2)pop 3)display 4)exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;
        }
    } while (ch != 5);
}