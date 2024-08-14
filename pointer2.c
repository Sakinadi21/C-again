#include<stdio.h>

void main()
{
    float a = 10, b = 5;
    float *p, *q;
    p = &a;
    q = &b;

    // Assign the value pointed to by p to the value pointed to by q
    *q = *p;

    // Print the values of a, the value pointed to by p, and the value pointed to by q
    printf("a = %f, *p = %f, *q = %f\n", a, *p, *q);
}


