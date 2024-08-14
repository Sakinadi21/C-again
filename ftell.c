/*The `ftell()` function in C is used to obtain the current position of the file pointer in a file.
It returns the offset, in bytes, from the beginning of the file to the current position of the file pointer.
 This is useful for keeping track of where you are in the file, especially when performing random access operations with `fseek()`.

### Syntax

```c
long ftell(FILE *stream);
```

### Parameters

- **`stream`**: A pointer to a `FILE` object that identifies the stream.

### Return Value

- **`long`**: The current position of the file pointer in bytes from the beginning of the file.
- **`-1L`**: If an error occurs, `ftell()` returns `-1L`. You can use `ferror()` to determine if an error occurred.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    long position;

    // Open the file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Print the initial position (should be 0)
    position = ftell(fp);
    printf("Initial position: %ld\n", position);

    // Move the file pointer 10 bytes forward
    fseek(fp, 10, SEEK_SET);

    // Get and print the new position
    position = ftell(fp);
    printf("Position after fseek(10, SEEK_SET): %ld\n", position);

    // Move the file pointer 5 bytes forward from the current position
    fseek(fp, 5, SEEK_CUR);

    // Get and print the new position
    position = ftell(fp);
    printf("Position after fseek(5, SEEK_CUR): %ld\n", position);

    // Move the file pointer to 10 bytes before the end of the file
    fseek(fp, -10, SEEK_END);

    // Get and print the new position
    position = ftell(fp);
    printf("Position after fseek(-10, SEEK_END): %ld\n", position);

    // Close the file
    fclose(fp);

    return 0;
}
/*
### Summary

- **`ftell()`** returns the current position of the file pointer in bytes from the beginning of the file.
- **Useful for**: Keeping track of where you are in the file, especially when combined with `fseek()` for random access operations.
- **Error Handling**: Check the return value of `ftell()` for `-1L` to handle errors, and use `ferror()` for further error details.

Using `ftell()` effectively allows you to manage file positions for various file manipulation tasks,
 making it easier to perform operations like reading or writing at specific points in a file. */
