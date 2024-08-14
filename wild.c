#include <stdio.h>

int main() {
    int *wild_ptr; // Declaration of an uninitialized pointer (wild pointer).

    // At this point, wild_ptr is a wild pointer because it hasn't been assigned a valid memory address.
    // Dereferencing a wild pointer can lead to undefined behavior, such as crashes or unexpected results.

    // printf("%d\n", *wild_ptr); // Uncommenting this line may cause a crash because wild_ptr points to an unknown location.

    // Correctly initializing the pointer:
    int x = 10; // Declare an integer variable 'x' and initialize it with the value 10.
    wild_ptr = &x; // Assign the address of 'x' to 'wild_ptr'. Now, 'wild_ptr' is no longer a wild pointer.

    // Now 'wild_ptr' points to a valid memory location (the address of 'x').
    printf("Value of x using wild_ptr: %d\n", *wild_ptr); // This will print the value of 'x', which is 10.

    // Resetting the pointer to NULL:
    wild_ptr = NULL; // Set 'wild_ptr' to NULL. Now, 'wild_ptr' doesn't point to any valid memory location.

    // Dereferencing a NULL pointer will also cause a crash, so the following line is commented out:
    // printf("%d\n", *wild_ptr); // Uncommenting this line will lead to a crash since 'wild_ptr' is NULL.

    return 0; // Return 0 to indicate successful execution of the program.
}
/*A wild pointer is a pointer that has not been initialized to a valid
 memory address. Dereferencing such a pointer can lead to undefined
 behavior. It is essential to either initialize pointers when declaring
 them or set them to NULL to avoid such issues.
/
