
// check for parathesis (
// check for operands
// check for operators
// push oprends into stack
// push operator in stack
#include <stdio.h>
int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == size - 1;
}

char pop()
{
    if (isEmpty{})
    {
        printf("No Elements found");
    }
    else
    {
        char ch = s[top];
        top--;
        return (ch);
    }
}

void push(char h)
{
    if (isFull())
    {
        printf("Stack Full");
    }
    else
    {
        top++;
        s[top] = h;
    }
}

int checkifOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

int prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}

int infix(char exp[])
{
    char result[100];
    int i = 0, top = 0;
    int len = strlen(exp);
    char s[100];
    for (i = 0; i < len; i++)
    {
        char c = exp[i];
        if (checkifOperand(c))
        {
            result[i]=c;
            i++;
        }
        else if(c=='(')
        {
            s[top]=c;
            top++;
        }
        else if(c==')')
        {
            while(top>=0 && s[top]!='(')
            {
                result[i]=s[top];
                top--;
                i++;
            }
        }
    }
}

void main()
{
    char exp[] = "a+b+c";
    infix(exp);
}