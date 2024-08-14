#include<stdio.h>
void main()
{

    int a= -11;
    const int *p =&a;
    //* p =10 error
    printf("%d",a);
}
