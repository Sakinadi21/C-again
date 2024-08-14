#include <stdio.h>

int i = 5; // Definition of extern i

int main() {
    printf("%d\n", i); // Prints the extern i
    {
        int i = 10; // Local i shadows the extern i within this block
        printf("%d\n", i); // Prints the local i
    }
    return 0;
}
