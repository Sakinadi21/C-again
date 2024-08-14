#include<stdio.h>

void add(int a,int b)
{
    printf("Addition is: %d\n", a + b);
}

void sub(int a,int b)
{
    printf("Subtraction is: %d\n", a - b);
}

void mult(int a ,int b)
{
    printf("Multiplication is: %d\n", a * b);
}

void div(int a,int b)
{
    if (b != 0)
        printf("Division is: %d\n", a / b);
    else
        printf("Error! Division by zero is not allowed.\n");
}

int main()
{
    int ch, a, b;

    printf("\n 0 for add\n 1 for sub\n 2 for multiply\n 3 for divide:\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(ch)
    {
        case 0: add(a, b); break;
        case 1: sub(a, b); break;
        case 2: mult(a, b); break;
        case 3: div(a, b); break;
        default: printf("Enter a valid choice.\n");
    }

    return 0;
}
