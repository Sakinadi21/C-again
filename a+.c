/*
The `"a+"` mode in C is used for opening a file for both reading and writing.
 This mode is particularly useful when you want to append data to an existing file while also
  being able to read its contents. The `"a+"` mode does not erase the existing content in the file;
   instead, it allows you to add new data to the end of the file.

### Key Characteristics of `"a+"` Mode:

1. **Read and Write**: You can both read from and write to the file.
2. **File Creation**: If the file does not exist, it is created.
3. **Appending**: Writing to the file appends data at the end of the file.
 The existing content is not modified.
4. **File Pointer**: The file pointer is positioned at the end of the file when opened,
which means any write operations will add data after the existing content.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in a+ mode
    fp = fopen("abc.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Append new content to the file
    fprintf(fp, "Appending new line of content.\n");

    // Rewind the file pointer to the beginning to read the content
    rewind(fp);

    // Read the content from the file to verify
    printf("Content of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
