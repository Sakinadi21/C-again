#include<stdio.h>
void sum();
void main()
{
    sum(5,4);
}

void sum(void)
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum = %d",sum);
}
