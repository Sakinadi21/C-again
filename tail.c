#include<stdio.h>

// Function definition with correct return type
int print(int a) {
    if (a < 1)
        return 0;
    else
        return 1 + print(a / 2);
}

int main() {
    int x;
    x = print(10);
    printf("%d\n", x);
    return 0;
}
/*
What the Code Does:
The print function recursively divides the number a by 2
 until a is less than or equal to 1. It counts how many times
it can divide a by 2 before reaching a value of 1 or less.
For a = 10, the function will return 1 + 1 + 1 = 3 because 10 / 2 = 5, 5 / 2 = 2, and 2 / 2 = 1.
*/
