#include <stdio.h>

int main() {
    int a = 10, b = 7;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    printf("a %% b = %d\n", a % b); // %% to print the % character
    getchar(); // Waits for a character input to mimic getch() behavior

    return 0;
}
