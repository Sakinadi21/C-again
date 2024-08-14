#include<stdio.h>
int main(){
int n1,n2;
char op;
printf("Enter operator : \n");
scanf("%c",&op);//op means operator
printf("Enter two operands : \n");
scanf("%d %d",&n1 ,&n2);
switch(op)
{
case '+':
    printf("addition= %d",n1+n2);
    break;
case '-':
     printf("subtraction = %d",n1-n2);
    break;
case '*':
    printf("multiplication = %d",n1*n2);
    break;
case '/':
    printf("divison = %d",n1/n2);
    break;
case '%':
   printf("remainder = %d",n1%n2);
    break;
default: printf("invalid operator");
}
}

/*
------------------------
| Enter operator : +   |
| Enter two operands : |
|    3                 |
|    2                 |
| sum=5                |
|----------------------|
*/
