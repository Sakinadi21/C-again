#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char s1[30],c;
    printf("enter string");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=s1[i];
    }
    printf("%s",s1);
}
