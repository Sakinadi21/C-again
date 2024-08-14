/*The `rewind()` function in C is used to set the file pointer of a file stream back to the beginning of the file.
 This is useful when you need to read from or write to the start of the file again after having moved the file pointer with functions like `fseek()`.

### Syntax


void rewind(FILE *stream);
```

### Parameters

- **`stream`**: A pointer to a `FILE` object that identifies the stream.

### Behavior

- **Resets the File Pointer**: The file pointer is moved to the beginning of the file.
- **Clears the End-of-File Indicator**: If the end-of-file indicator is set, `rewind()` clears it.
- **Clears the Error Indicator**: If the error indicator is set, `rewind()` clears it.

*/
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

    // Read and print the first part of the file
    printf("First read:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Reset the file pointer to the beginning of the file
    rewind(fp);

    // Read and print the file again from the beginning
    printf("\nSecond read after rewind:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
/*

### Summary

- **`rewind()`** is used to reset the file pointer to the beginning of the file.
- **Clears Indicators**: It also clears the end-of-file and error indicators.
- **Use Case**: Useful when you need to reread or rewrite data from the start of the file without reopening it.

Using `rewind()` simplifies file management when you need to start over with file operations,
 making it easier to handle scenarios where multiple reads or writes from the start of the file are required.
 */
