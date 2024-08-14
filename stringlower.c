#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char s1[30];
    printf("enter string :");
    gets(s1);
    //strlen(s1)
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("string is : %s",s1);
}
