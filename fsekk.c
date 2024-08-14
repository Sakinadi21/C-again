The `fseek()` function in C is used to move the file pointer to a specific location within a file. This is particularly useful for random access to file data, allowing you to read from or write to any part of the file without needing to sequentially process all the data before it.

### Syntax

```c
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

Here are examples demonstrating how to use `fseek()` to move the file pointer in different scenarios.

#### Example 1: Using `fseek()` to Move to a Specific Position

```c
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
```

#### Example 2: Using `fseek()` to Move Relative to the Current Position

```c
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

    // Read data from this position
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Data from position 10: %s", buffer);
    }

    // Move the file pointer 5 bytes forward from the current position
    fseek(fp, 5, SEEK_CUR);

    // Read and print the data from this new position
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Data after moving 5 bytes forward: %s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
```

#### Example 3: Using `fseek()` to Move Relative to the End of the File

```c
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

    // Move the file pointer to the 10th byte before the end of the file
    fseek(fp, -10, SEEK_END);

    // Read and print the data from this position
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Data from 10 bytes before end: %s", buffer);
    } else {
        printf("Error reading file.\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
```

### Explanation

1. **Opening the File**: Always ensure the file is opened before using `fseek()`. The file must be opened in a mode that allows reading or writing as required.

2. **Moving the File Pointer**:
   - `fseek(fp, 10, SEEK_SET);` moves the file pointer to 10 bytes from the beginning of the file.
   - `fseek(fp, 5, SEEK_CUR);` moves the file pointer 5 bytes forward from its current position.
   - `fseek(fp, -10, SEEK_END);` moves the file pointer to 10 bytes before the end of the file.

3. **Reading from the File**: After moving the file pointer, you can use functions like `fgets()` to read data from the new position.

4. **Closing the File**: Always close the file after performing file operations to ensure that all data is flushed and resources are released.

### Summary

- **`fseek()`** is used to set the file pointer to a specific location within a file.
- **`SEEK_SET`** moves the pointer relative to the beginning of the file.
- **`SEEK_CUR`** moves the pointer relative to the current position.
- **`SEEK_END`** moves the pointer relative to the end of the file.
- **Error Checking**: Always check for errors in file operations and handle them appropriately.

This function is essential for random access file operations and is widely used in scenarios where you need to navigate and manipulate data within a file efficiently.
