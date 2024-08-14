#include <stdio.h>

typedef int integer;

int main()  // Added return type 'int' for main function
{
    int a = 10;
    integer b = 15;

    printf("a = %d, b = %d\n", a, b);  // Optional: print the values of a and b
    return 0;  // Added return statement
}
