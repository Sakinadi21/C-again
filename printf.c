/*Formatted output function
printf("Control String " ,arg1 arg2 ......argn);
%
printf("Jenny's lecture");
*/
#include<stdio.h>

int main() {
    int a, b, sum;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");

    // Read two integers from the user
    scanf("%d %d", &a, &b);

    // Calculate the sum of a and b
    sum = a + b;

    // Print the values of a, b, and the sum
    printf("a = %d, b = %d, sum = %d\n", a, b, sum);

    return 0;
}

/*
-----------------------
|    scanf()          |
| | 1000| | 2000 |    |
|    printf()
|   a     b    sum    |
| | 5 | | 4 | | 0 |   |
|     main()          |
|   a     b    sum    |
| | 5 | | 4 | | 9 |   |
| 1000  2000  3000    |
|                     |
-----------------------
*/
