#include <stdio.h>
#include <stdlib.h>
int a[10];
int f = -1, r = -1, ch, n;

void push()
{
    if (f==-1&&r==-1)
    {
        f = 0, r = 0;
        printf("Enter the element to be entered:");
        scanf("%d", &a[r]);
    }
    else if(f==(r+1)%n)
    {
        printf("queue is Full\n");
    }
    else
    {
        r=(r+1)%n;
        printf("Enter the element to be entered:");
        scanf("%d", &a[r]);
    }
}

void pop()
{
    if (f == -1 && r==-1)
    {
        printf("queue is Empty\n");
    }
    else if (f == r)
    {
        printf("Dequeued element is:%d",a[f]);
        f = -1, r = -1;
    }
    else
    {
        printf("\nDequeued element is:%d",a[f]);
        f=(f+1)%n;
    }
}
void display()
{
    if(r==-1)
    {
        printf("Queue is empty");
    }
    else
    {   int i=f;
        while (i != r)
        {
            printf("%d ", a[i]);
            i= (i + 1) % n;
        }
        printf("%d ", a[i]);
    }
}
void main()
{
    printf("\nEnter the limit of the queue");
    scanf("%d", &n);
    do
    {
        printf("Enter the option: 1)enq 2)deq 3)display 4)exit\n");
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