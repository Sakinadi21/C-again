//Return string from a function
#include<stdio.h>
char *display();
void main()
{

    char *str;
    str=display();
    printf("String : %s ",str);
    str[0]='z';
    printf("string is : %s",str);

}
 char* display()
{
    char* str = "jenny";
    return str;
}
