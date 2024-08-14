#include <stdio.h>

int main() {
    int number, i, a;
    printf("Enter a number: \n");
    scanf("%d", &number);

    // Consume the newline character left by scanf
    getchar();

    for (i = 1; i <= 10; i++) {
        a = number * i;
        printf("%d x %d = %d\n", number, i, a);
    }

    // Use getchar() to wait for a key press if needed
    getchar();

    return 0;
}
