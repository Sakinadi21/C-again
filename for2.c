#include <stdio.h>

int main() {
    int i, j,k;
    for (i = 1, j = 0,k=3; i <= 5 , j <=6,k>1; i++, j++,k--) {
        printf("%d %d %d\n", i, j,k);

        /* 1 0 3
           2 1 2
        */
    }

    // Use getchar() to wait for a key press if needed
    getchar();

    return 0;
}
