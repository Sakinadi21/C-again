
#include<stdio.h>
int main(){
int age ;
 printf("Enter age : \n");
 scanf("%d",&age);
 if(age>25 && age<30){
    printf("age : %d ",age);
    printf("Coffee with me\n");

 }
 else {
    printf("age : %d ",age);
    printf("Go home\n");
 }
 printf("out of if else");
 }

 /* if(condition )
 {
 true-block statement ;
 }
 else{
    false-block statement;
 }
 alternative block statement
 */

 /*                /----------\
                   | condition|
     false ------  \----------/
           |           |
           v      true V
   false block        true B statement
    statement           |
    |-----------| ------|
             Alternate
