/*The `calloc()` function in C is used for dynamic memory allocation and is similar to `malloc()`,
but with a few key differences. It allocates memory for an array of elements and initializes all the allocated memory to zero.
Contiguous allocation
built function in stdlib.h
used to dynamically allocate multiple blocks of memory & each block is of same size
### Syntax


void *calloc(size_t num, size_t size);
```

### Parameters

- **`num`**: The number of elements to allocate.
- **`size`**: The size of each element in bytes.

### Return Value

- **Pointer to Allocated Memory**: `calloc()` returns a pointer to the allocated memory block.
- **`NULL` on Failure**: If the allocation fails, it returns `NULL`.

### Characteristics

1. **Initialization**:
   - **Zero Initialization**: Unlike `malloc()`, which leaves the allocated memory uninitialized,
   `calloc()` initializes all the bytes in the allocated memory to zero. This can be useful
   when you need memory to be zeroed out for safety or initialization reasons.

2. **Array Allocation**:
   - **Multi-Element Allocation**: `calloc()` is particularly useful for allocating memory for arrays
    because it takes two parameters: the number of elements and the size of each element.
     This makes it convenient to allocate a block of memory for an array and initialize all elements to zero.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Asking user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory for 'n' integers and initializing to zero
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Printing the array elements (should all be initialized to zero)
    printf("Array elements after calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Should print 0 for all elements
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
/*

### Explanation

1. **Allocating Memory**:
   - `arr = (int *)calloc(n, sizeof(int));`
     - This allocates memory for an array of `n` integers. Each integer is of size `sizeof(int)`. All elements are initialized to zero.

2. **Checking Allocation Success**:
   - `if (arr == NULL) { ... }`
     - This checks if the memory allocation was successful. If not, the program prints an error message and exits.

3. **Using the Allocated Memory**:
   - The program prints the elements of the array. Since `calloc()` initializes the memory to zero, all elements are initially zero.

4. **Freeing the Memory**:
   - `free(arr);`
     - This deallocates the memory previously allocated by `calloc()`, preventing memory leaks.

### Summary

- **`calloc()`** is used for dynamic memory allocation with zero initialization of the allocated memory.
 It is particularly useful when you need an array of elements where each element is initialized to zero.
- **Memory Management**: As with `malloc()`, memory allocated with `calloc()` must be freed using `free()` to avoid memory leaks.
*/
