#include<stdio.h>

int main() {

    void *vp; // Declare a void pointer 'vp'.

    int a = 5; // Initialize an integer variable 'a' with value 5.
    float b = 1.56; // Initialize a float variable 'b' with value 1.56.
    char ch = 'c'; // Initialize a char variable 'ch' with value 'c'.

    vp = &a; // Assign the address of 'a' to the void pointer 'vp'.
    // Dereference the void pointer 'vp' as an integer pointer and print the value of 'a'.
    printf("a = %d\n", *(int *)vp);

    vp = &b; // Assign the address of 'b' to the void pointer 'vp'.
    // Correct the syntax for dereferencing 'vp' as a float pointer and print the value of 'b'.
    printf("b = %f\n", *(float *)vp);

    vp = &ch; // Assign the address of 'ch' to the void pointer 'vp'.
    // Dereference the void pointer 'vp' as a char pointer and print the value of 'ch'.
    printf("ch = %c\n", *(char *)vp);

    return 0; // Return 0 to indicate successful execution of the program.
}
