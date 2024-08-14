#include <stdio.h>

int main() {
    int a = 18, b = 9, c, d, e = 10;
    c = b++;
    d = b;
    printf("%d\n", (a < b) && (c > d)); // Corrected expression
    printf("%d\n", b == c);
    printf("%d\n", c + 1 > e);
    printf("%d\n", (a + c == b) > (e < c + d)); // Corrected expression
    return 0;
}
