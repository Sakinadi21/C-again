#include<stdio.h>
int main()
{
 int a = 10, b=11;
 int *p,*q;
 p=&a;
 q=p;
 printf("a=%d %d %d",a,*p,*q);
}
/*

    a       b
-->|10|    |11|
|  1000    1046
|       \
|    p   \    q
|--|1000| \|1000|
    2000    3000
