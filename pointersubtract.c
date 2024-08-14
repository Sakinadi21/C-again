#include<stdio.h>

void main()
{
    int a[] = {2, 4, 3, 0, -7}; // Initialize an array 'a' with 5 integer elements.
    int *p = a; // Pointer 'p' is set to point to the first element of the array 'a'.
    int *q = &a[3]; // Pointer 'q' is set to point to the fourth element of the array 'a' (which is '0').

    // Calculate the difference between pointers 'q' and 'p' (in terms of number of elements)
    // Since q points to a[3] and p points to a[0], q - p = 3.
    printf("q-p = %d\n", q - p);

    // Calculate the difference between pointers 'p' and 'q'
    // p - q will be the negative of q - p, so p - q = -3.
    printf("p-q = %d\n", p - q);

    // Dereference 'q' to get the value at the memory location it points to.
    // Since q points to a[3], which is 0, *q = 0.
    printf("value = %d\n", *q);

    p = p + 2; // Move pointer 'p' two elements forward. Now, p points to a[2] (which is '3').

    // Calculate the difference again after modifying 'p'.
    // Now, q still points to a[3] and p points to a[2], so q - p = 1.
    printf("q-p = %d\n", q - p);

    q = q - 2; // Move pointer 'q' two elements backward. Now, q points to a[1] (which is '4').

    // Dereference 'q' to get the new value at the memory location it now points to.
    // Since q now points to a[1], *q = 4.
    printf("value = %d", *q);
}
