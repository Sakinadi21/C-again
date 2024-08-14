#include<stdio.h>
int main()
{

    char str[]="Welcome to Sakiba's programming";
    char *ptr=str;
    printf("%c",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("%c\n",*(++ptr +10)-32);
    printf("%c %c %c ",*ptr ,*++ptr,*--ptr);

}
