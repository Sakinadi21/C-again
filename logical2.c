#include <stdio.h>

int main() {
    int a = 10, b = 5, result, result1, result2;
    result = a > b || a++;  // result is true (1), a++ is not executed because a > b is true
    result1 = a-- && ++b;   // result1 is true (1), a is decremented after this line, b is incremented before this line
    result2 = --a && --b;   // result2 depends on the decremented values of a and b
    printf("%d\n", result); // prints 1
    printf("%d\n", result1); // prints 1
    printf("%d\n", result2); // prints based on decremented values of a and b
    printf("%d\n", a); // prints the final value of a
    return 0;
}
