#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for the malloc function.

int main() {
    int *ptr; // Declare a pointer to an integer.

    // Allocate memory for 5 integers using malloc and cast the return value to an int pointer.
    ptr = (int *)malloc(5 * sizeof(int));

    // Check if the memory allocation was successful.
    if (ptr == NULL) {
        // If malloc failed and returned NULL, print an error message.
        printf("Memory allocation failed\n");
        return 1; // Exit the program with a non-zero value to indicate an error.
    }

    // If allocation was successful, print the first element of the allocated memory.
    // Since the memory is not initialized, this will print a garbage value.
    printf("First element: %d\n", *ptr);

    // Free the allocated memory to avoid memory leaks.
    free(ptr);

    return 0; // Return 0 to indicate successful execution of the program.
}
