/*In C, the `free()` function is used to deallocate memory that was previously allocated using functions like `malloc()`,
 `calloc()`, or `realloc()`. Proper use of `free()` is essential for effective memory management and avoiding memory leaks.

### Syntax

```c
void free(void *ptr);
```

### Parameters

- **`ptr`**: A pointer to the memory block that you want to deallocate.
 This pointer should have been returned by a previous call to `malloc()`, `calloc()`, or `realloc()`.

### Characteristics

1. **Deallocates Memory**:
   - **Purpose**: `free()` releases the memory allocated by `malloc()`, `calloc()`, or `realloc()`, making it available for future allocations.

2. **Pointer Handling**:
   - **Invalidates Pointer**: After calling `free()`, the pointer `ptr` becomes invalid.
    Accessing memory through this pointer leads to undefined behavior. It is a good practice to set the pointer to `NULL`
     after freeing it to avoid accidental use of an invalid pointer.

3. **Not Automatic**:
   - **Manual Management**: Memory must be manually deallocated using `free()`. Failure to do so results in memory leaks,
    where memory is not returned to the system and can eventually exhaust available memory resources.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;
    int i;

    // Allocating memory for an array of 5 integers
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Initialize and print the array elements
    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    // Set the pointer to NULL to avoid dangling pointer issues
    arr = NULL;

    return 0;
}
/*

### Explanation

1. **Memory Allocation**:
   - `arr = (int *)malloc(size * sizeof(int));`
     - Allocates memory for an array of 5 integers. Checks if the allocation was successful.

2. **Using the Allocated Memory**:
   - Initializes and prints the elements of the array.

3. **Freeing Memory**:
   - `free(arr);`
     - Deallocates the memory previously allocated. This makes the memory available for other uses.

4. **Setting Pointer to `NULL`**:
   - `arr = NULL;`
     - Sets the pointer to `NULL` after freeing the memory to avoid using a dangling pointer.
      Accessing memory through a pointer that points to freed memory can cause undefined behavior and potential crashes.

### Summary

- **`free()`** is used to release memory allocated dynamically by `malloc()`, `calloc()`, or `realloc()`.
- **Pointer Management**: After freeing memory, the pointer should be set to `NULL` to avoid accessing invalid memory.
- **Memory Leaks**: Failure to use `free()` can lead to memory leaks, where memory is not properly released and can eventually exhaust system resources.

Proper memory management using `free()` is crucial in C programming to ensure efficient use of resources and to maintain program stability.
*/
