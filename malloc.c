/*Dynamic memory allocation in C is achieved using functions from the standard library that manage memory at runtime.
The `malloc()` function is one such function used to allocate a block of memory dynamically. Below is an example of how to use
 `malloc()` in C, along with explanations and comments on why `malloc()` is used.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Asking user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory for 'n' integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Initializing and printing the array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
/*

### Explanation and Comments

1. **Including Required Headers**:
   - `#include <stdio.h>`: For input and output functions.
   - `#include <stdlib.h>`: For the `malloc()` and `free()` functions.

2. **Allocating Memory**:
   - `arr = (int *)malloc(n * sizeof(int));`
     - **Purpose of `malloc()`**: `malloc()` is used to allocate a block of memory of a specified size and returns a pointer to the beginning of this block. In this case, `n * sizeof(int)` calculates the total number of bytes needed for an array of `n` integers.
     - **Why Use `malloc()`**: `malloc()` allows for dynamic memory allocation, meaning the exact amount of memory needed is determined at runtime, not at compile time. This is useful for handling varying amounts of data, especially when the size is not known in advance.

3. **Checking Allocation Success**:
   - `if (arr == NULL) { ... }`
     - **Why Check for `NULL`**: `malloc()` returns `NULL` if the memory allocation fails (e.g., due to insufficient memory). It's important to check if the allocation was successful to avoid dereferencing a `NULL` pointer, which would lead to undefined behavior and potential crashes.

4. **Using the Allocated Memory**:
   - The program then uses the allocated memory to store user inputs and prints them. This demonstrates how dynamic memory can be utilized after allocation.

5. **Freeing the Memory**:
   - `free(arr);`
     - **Purpose of `free()`**: `free()` is used to deallocate memory that was previously allocated with `malloc()`. This is important to prevent memory leaks, which occur when allocated memory is not properly released and can eventually exhaust system memory resources.

### Summary

- **`malloc()` Function**:
  - **Usage**: Allocates a block of memory dynamically at runtime.
  - **Why Used**: Provides flexibility to allocate memory based on runtime needs and handle varying data sizes efficiently.
  - **Return Value**: Returns a pointer to the allocated memory block or `NULL` if allocation fails.
  - **Memory Management**: Requires explicit deallocation using `free()` to prevent memory leaks.

Dynamic memory allocation is essential in scenarios where the size of the data structure cannot be determined at compile
 time or when handling large and variable-sized data efficiently.
 */

