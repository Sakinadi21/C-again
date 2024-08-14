#include <stdio.h>

// Define a macro to calculate the maximum of two values
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    // Use the macro to find the maximum of 5 and 6
    printf("%d\n", MAX(5, 6));

    // Undefine the MAX macro
    #undef MAX

    // Redefine the MAX macro to test again
    #define MAX(a, b) ((a) > (b) ? (a) : (b))

    // Use the macro to find the maximum of 11 and 6
    printf("%d\n", MAX(11, 6));

    // Variables for comparison
    int a = 10;
    int b = 20;

    // Print the maximum of 'a' and 'b'
    if (a > b)
        printf("%d is max\n", a);
    else
        printf("%d is max\n", b);

    return 0;
}
