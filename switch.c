#include<stdio.h>
int main(){
char ch;
printf("Enter ch : \n");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("Vowel");
    break;
default: printf("Consonant");
}
}

/*
switch(expression)
{
case value-1 :
             Block of Statements 1;
             break;
case value-2 :
             Block of Statements 2;
             break;
     '
     '
     '
     '
     '
    default:
           default Statement ;
}
Statement - x;

*/

/*
          expression
            |
            v
         --------
       / is equal \
       | to case  |    Yes              break
       |  value   |--------> Code 1 ------------
       |   1      |                            |
       \----------/                            |
        No |                                   |
           |                                   |
           v                                   |
         --------                              |
       / is equal \                            |
       | to case  |    Yes              break  |
       |  value   |--------> Code 2 ----------->
       |     2    |                            |
       \----------/                            |
        No |                                   |
           |                                   |
           v                                   |
         --------                              |
       / is equal \                            |
       | to case  |    Yes              break  |
       |  value   |--------> Code 3 ----------->
       | type of  |                            |
       \----------/                            |
         |                                     |
         |                                     |
         v                                     v
        Default ------------------------->Statement
*/
