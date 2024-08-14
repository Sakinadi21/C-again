
#include<stdio.h>

void main() {
    int a[] = {3, 2, 6, 7, 0, 56}; // Initialize an array 'a' with 6 integer elements.
    int *p; // Declare a pointer 'p' that can point to an integer.

    p = a; // Initialize the pointer 'p' to point to the first element of array 'a'.

    // Print the value pointed to by 'p' (which is a[0] = 3)
    printf("%d\n", *p);

    // Print the value pointed to by 'p' divided by 2 (which is 3/2 = 1)
    // Then increment 'p' to point to the next element (a[1])
    printf("%d ", *p++ / 2);

    // Print the value pointed to by the now incremented 'p' (which is a[1] = 2)
    // Then increment 'p' to point to the next element (a[2])
    printf("%d\n", *p++);

    // Decrement 'p' to point back to a[1], then print the value (which is 2)
    // Decrement 'p' again to point back to a[0], then print the value (which is 3)
    // Since the format string has space for 3 values but only 2 are provided, I've removed the extra placeholder.
    printf("%d %d\n", *--p, *--p);

    // Decrement the value pointed to by 'p' (a[0]), so a[0] becomes 2.
    --(*p);

    // Increment the value pointed to by 'p' (a[0]), so a[0] becomes 3 again.
    (*p)++;

    // Increment the value pointed to by 'p' (a[0]), so a[0] becomes 4.
    ++(*p);

    // Print the final value at 'p' after the operations (which is 4)
    printf("%d\n", *p);
}

/*Array Initialization:

int a[] = {3, 2, 6, 7, 0, 56};
An array a of integers is initialized with the values {3, 2, 6, 7, 0, 56}.
Pointer Initialization:

int *p;
A pointer p is declared.
p = a;
The pointer p is initialized to point to the first element of the array a (which is 3).
Dereferencing and Printing Values:

printf("%d\n", *p);

This prints the value pointed to by p, which is a[0] = 3.
printf("%d ", *p++ / 2);

This first prints the result of *p / 2, which is 3/2 = 1 (integer division).
Then, p is incremented to point to the next element of the array (a[1] = 2).
printf("%d\n", *p++);

This prints the current value pointed to by p, which is a[1] = 2.
Then, p is incremented again to point to the next element (a[2] = 6).
Pointer Decrement and Printing Values:

printf("%d %d\n", *--p, *--p);
--p first decrements p to point back to a[1], and prints the value 2.
--p again decrements p to point back to a[0], and prints the value 3.
Value Modifications:

--(*p);
The value pointed to by p (which is a[0] = 3) is decremented, making it 2.
(*p)++;
The value at a[0] is incremented again, making it 3.
++(*p);
The value at a[0] is incremented once more, making it 4.
Final Print Statement:

printf("%d\n", *p);
This prints the final value of *p, which is 4.

a|1000|
|        0    1      2     3    4
|----->| 3  | 2   | 67   | 0  |  56 |
        1000  1004  1008  1012 1016
        8/
