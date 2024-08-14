#include<stdio.h>

int main() {
    int a, b, c, sum;

    // Corrected the scanf statement to read three integers into a, b, and c
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the sum of a, b, and c
    sum = a + b + c;

    // Print the sum
    printf("sum = %d\n", sum);

    return 0;
}


/*
scanf("Control String ", arg1 arg2 arg3 ......)
int a,float b ,char ch;
scanf("%d %f %c" , &a &b &ch);


--------------------------------------
printf ----------

scanf
-------  -------
| 100 |  | 200 |
-------  -------
  main()

 a    b    sum
---  ---- -----
| |  |  | |   |
---  ---- -----
100   200   300

*/
