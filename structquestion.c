#include <stdio.h>

struct question {
    int a;
    float b;
    int c;
};

int main()  // Corrected 'void main()' to 'int main()'
{
    struct question q = {1, 10.0, 15};  // Ensure '10.0' is a floating-point value
    printf("%d\n%.2f\n%d\n", q.a, q.b, q.c);  // Corrected format specifiers and added newline after each value
    return 0;  // Added return statement
}
