/*The `fseek()` function in C is used to move the file pointer to a specific location within a file.
 This is particularly useful for random access to file data, allowing you to read from or write to any part
 of the file without needing to sequentially process all the data before it.

### Syntax


int fseek(FILE *stream, long int offset, int whence);
```

### Parameters

- **`stream`**: A pointer to a `FILE` object that identifies the stream.
- **`offset`**: The number of bytes to move the file pointer. This can be positive or negative depending on the direction you want to move.
- **`whence`**: The starting point for the offset. It can be one of the following constants:
  - **`SEEK_SET`**: The beginning of the file.
  - **`SEEK_CUR`**: The current position of the file pointer.
  - **`SEEK_END`**: The end of the file.

### Return Value

- **`0`**: Success.
- **`-1`**: Failure. You can use `ferror()` to determine if an error occurred.

### Example Usage

Here are examples demonstrating how to use `fseek()` to move the file pointer in different scenarios.*/


#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move the file pointer to the 10th byte from the beginning
    fseek(fp, 10, SEEK_SET);

    // Read and print the data from this position
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Data from position 10: %s", buffer);
    } else {
        printf("Error reading file.\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
/*
### Summary

- **`fseek()`** is used to set the file pointer to a specific location within a file.
- **`SEEK_SET`** moves the pointer relative to the beginning of the file.
- **`SEEK_CUR`** moves the pointer relative to the current position.
- **`SEEK_END`** moves the pointer relative to the end of the file.
- **Error Checking**: Always check for errors in file operations and handle them appropriately.
*/

