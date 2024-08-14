#include <stdio.h>

int i = 5; // Global variable

int main() {
    // No need to redeclare 'i' with extern here; it's already globally defined.
    printf("%d ", i); // Print the value of the global variable 'i'

    int j = 10; // Declare and initialize 'j'
    printf("%d", j); // Print the value of 'j'

    return 0;
}
