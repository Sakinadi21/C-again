/*
while(condition)
{
    while(condition)
    {
        inner loop
    }
    outer loop
}


         /-----------\
  false  | outer     |
-------->| loop      |<--------
         | condition |
         \-----------/
               |
               v
         /-----------\
  false  | outer     |
-------->| loop      |<--------
         | condition |
         \-----------/
               |
               v true
            I.L.S.B  --------

O.L.S.B ------------------------
*/
#include<stdio.h>
int main()
{
int i = 0, j=1;
while(i<3)
{
    while(j<=3)
    {
        printf("%d\n",j++); // j = 1 2 3  . then 4 will not print
    }
    printf("%d\n",i++); //i= 0 1 2  / then 3 will not print
}
}

