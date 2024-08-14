/*
&&
int a =10, b=15;
a==b && b<a
a>b && b!=10 && b<11 && a<5
printf("%d",result);

*/
#include<stdio.h>
int main(){
int a =10 ,b=15;
printf("%d\n",a>b && b!=10 && b<11 && a<5);
printf("%d",a<b || b==4);
}
