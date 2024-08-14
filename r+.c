

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in r+ mode
    fp = fopen("abc.txt", "r+");
    if (fp == NULL) {
        printf("Error opening file. File does not exist.\n");
        exit(1);
    }

    // Read the current content of the file
    printf("Current content of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Rewind the file pointer to the beginning
    rewind(fp);

    // Overwrite the file with new content
    fprintf(fp, "This is new content.\n");

    // Rewind again to read the new content
    rewind(fp);
    printf("\nNew content of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}

/*
The `"r+"` mode in C is used for opening a file for both reading and writing.
 This mode allows you to modify the contents of an existing file, as well as read from it.
  However, it does not create a new file if the specified file does not exist, so attempting
  to open a non-existent file in `"r+"` mode will result in an error.

### Key Characteristics of `"r+"` Mode:

1. **Read and Write**: You can both read from and write to the file.
2. **File Must Exist**: The file must already exist. If the file does not exist, `fopen()` will return `NULL`.
3. **File Pointer**: The file pointer is positioned at the beginning of the file when the file is opened.
4. **Overwrite Content**: Writing to the file will overwrite the existing content starting from the current position of the file pointer.
*/
