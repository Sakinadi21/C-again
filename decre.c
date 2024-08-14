#include<stdio.h>

int main() {
    int a[] = {10, 11, -1, 56, 67, 5, 4}; // Initialize an array 'a' with 7 integer elements.
    int *p, *q; // Declare two integer pointers 'p' and 'q'.

    p = a; // Initialize 'p' to point to the first element of the array 'a' (a[0]).
    q = &a[0] + 3; // Initialize 'q' to point to the fourth element of the array 'a' (a[3] = 56).

    // Print values using pointer arithmetic and increments:
    // (*p)++ first returns the value pointed to by 'p' (which is 10), then increments the value at 'p' to 11.
    // (*p)++ now returns the incremented value (11), then increments the value at 'p' to 12.
    // *(++p) increments the pointer 'p' to point to a[1] (value 11) and then returns that value (11).
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p));

    // Print the current value pointed to by 'p' (which now points to a[1] and has value 11).
    printf("%d\n", *p);

    // (*p)++ first returns the value pointed to by 'p' (which is 11), then increments it to 12.
    printf("%d\n", (*p)++);

    // (*p)++ returns the incremented value (12), then increments it to 13.
    printf("%d\n", (*p)++);

    q--; // Decrement 'q' to point to the previous element in the array (now q points to a[2], value -1).

    // Print the value at the location 'q+2' (q points to a[2], so q+2 points to a[4] which is 67).
    // (*(q+2)--) first returns 67, then decrements the value at q+2 to 66.
    printf("%d\n", (*(q+2))--);

    // *(p+2) points to a[3] (since p currently points to a[1], p+2 points to a[3] which is 56).
    // *(p+2) - 2 returns 56 - 2, which is 54.
    printf("%d\n", *(p+2) - 2);

    // *(p++ -2) is incorrect because subtracting an integer directly from a pointer doesn't make sense.
    // Corrected version: (p + (N - 2)) where N is the current index of 'p'.
    // For illustrative purposes, if we intend to move the pointer and access an element, the expression should be (p + offset).
    // However, the intended use in this example seems unclear, so let's clarify:
    printf("%d\n", *(p++)); // This will print the current value pointed to by 'p' (which is now 13).

    return 0;
}
