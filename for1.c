#include <stdio.h>

int main() {
    int i, j;
    int a = 5, b = 6;

    // Initialize j before using it
    j = 0;

    for (i = (a + b); i <= 50; i = i + a) {
        printf("%d %d\n", i, j);
        j++;

        /*11 0
          16 1
          21 2
          26 3*/
    }

    // Use getchar() to wait for a key press if needed
    getchar();

    return 0;
}
