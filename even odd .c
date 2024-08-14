//WAP to read an array of 10 integers and count total no of even & odd elements

#include<stdio.h>
int main()
{
 int a[10],i;
 int even = 0 , odd = 0;
 printf("enter array elements : ");
 for(i=0;i<10;i++)
 {
     scanf("%d",&a[i]);
     if(a[i]%2 == 0)
        even = even +1 ; //even++
     else
        odd = odd + 1; //odd++
 }
  printf("even elements are = %d",even);
  printf("\n odd elements are = %d",odd);
}

/*
a
100
    |
    v
   --- --- --- --- ---- ---- ---- ---- --- ---
a | 1 | 2 | 4 | 7 | 10 | 15 | 16 | 20 | 8 | 5 |
   --- --- --- --- ---- ---- ---- ---- --- ---
    0   1   2   3    4    5   6     7   8   9
    100 104 108 112 116  120  124  128 132 136


      i            even      odd
    |---|         |-----|   |----|
    | 0/1/2/3/4    | 2 |    | 2 |
      1000         2046      3000
*/
