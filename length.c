#include<stdio.h>
int main()
{

    int count=0;
    char name[30];
    printf("Enter name ");
    gets(name);
    count=strlen(name);
    printf("string length is %d",count);
}
