#include <stdio.h>

// Function definition
int incr(int i) {
    static int count = 0; // Static variable to keep track of the cumulative count
    count = count + i; // Update count by adding the input i
    return count; // Return the updated count
}

int main() { // Corrected to 'int main()'
    int i, j;
    for (i = 0; i <= 4; i++) {
        j = incr(i); // Call incr() with i and store the result in j
        printf("i = %d, j = %d\n", i, j); // Print the values of i and j
    }
    return 0; // Return 0 to indicate successful execution
}
