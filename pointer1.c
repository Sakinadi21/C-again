#include<stdio.h>
int main()
{

    int a=10,b=0,c;
    int *p,*q;
    p=&a;
    //q=&b;
    c=*p;
    printf("value of a = %d\n",a);
    printf("value of a = %d\n",*p);
    printf("address of a = %x\n",&a);
    printf("address of p = %x\n",&p);
    printf("c = %d\n",c);

}
