/*The `realloc()` function in C is used to resize a previously allocated memory block.
 It can be used to increase or decrease the size of a memory block that was initially allocated with functions like `malloc()` or `calloc()`.

### Syntax


void *realloc(void *ptr, size_t new_size);

### Parameters

- **`ptr`**: A pointer to the previously allocated memory block that you want to resize.
 This pointer must have been obtained from a previous call to `malloc()`, `calloc()`, or `realloc()`.
- **`new_size`**: The new size, in bytes, of the memory block.

### Return Value

- **Pointer to Resized Memory**: `realloc()` returns a pointer to the resized memory block.
If the function successfully resizes the memory, it returns a pointer to the new block.
 If the function fails, it returns `NULL`.
- **`NULL` on Failure**: If the memory cannot be allocated or resized, `realloc()` returns `NULL`, and the original memory block remains unchanged.

### Characteristics

1. **Resizing**:
   - **Increase or Decrease Size**: `realloc()` can be used to either increase or decrease the size of the allocated memory block.

2. **Data Preservation**:
   - **Data Retention**: If `realloc()` successfully resizes the memory, the existing data is preserved in the new memory block up to the minimum of the old and new sizes.

3. **Pointer Handling**:
   - **New Pointer**: If `realloc()` moves the memory block to a new location (because the new size does not fit in the old location), it returns a new pointer. The original pointer is invalidated, so you must use the new pointer for accessing the resized memory.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size = 5;
    int new_size = 10;
    int i;

    // Allocate initial memory for an array of 5 integers
    arr = (int *)malloc(initial_size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    // Initialize and print initial array elements
    printf("Initial array elements:\n");
    for (i = 0; i < initial_size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the memory to hold 10 integers
    arr = (int *)realloc(arr, new_size * sizeof(int));

    // Check if memory reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Initialize and print resized array elements
    printf("Resized array elements:\n");
    for (i = 0; i < new_size; i++) {
        if (i >= initial_size) {
            arr[i] = i + 1; // Initialize new elements
        }
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
/*

### Explanation

1. **Initial Allocation**:
   - `arr = (int *)malloc(initial_size * sizeof(int));`
     - Allocates memory for an array of 5 integers. Checks if the allocation was successful.

2. **Resizing Memory**:
   - `arr = (int *)realloc(arr, new_size * sizeof(int));`
     - Resizes the memory block to hold 10 integers. If `realloc()` succeeds,
     the pointer `arr` is updated to point to the new memory block. If it fails, `arr` remains unchanged.

3. **Using the Resized Memory**:
   - The program initializes new elements and prints the entire array. It shows how data is preserved and new data is added.

4. **Freeing Memory**:
   - `free(arr);`
     - Frees the memory allocated by `realloc()` to prevent memory leaks.

### Summary

- **`realloc()`** is used to resize an existing block of memory.
- **Flexibility**: It can be used to both increase and decrease the size of the memory block.
- **Data Preservation**: Existing data is preserved up to the smaller of the old and new sizes.
- **Pointer Management**: Returns a new pointer if the memory block is moved; the old pointer becomes invalid.

`realloc()` is useful in scenarios where you need to adjust the size of dynamically allocated memory based on changing requirements during runtime.
*/
