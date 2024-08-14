
#include<stdio.h>
#include<string.h>
int main(){
int value;
char s1[30],s2[30];
printf("enter string 1: ");
gets(s1);
printf("enter string 2: ");
gets(s2);
value=strcmp(s1,s2);
if(value==0)
    printf("same");
else
    printf("not same");
}
