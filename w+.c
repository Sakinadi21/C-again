/*The `"w+"` mode in C is used for opening a file for both reading and writing. When you open a file in `"w+"` mode, the file is created if it doesn't already exist, and if it does exist, its contents are erased (truncated to zero length). This means any existing data in the file will be lost when you open it with `"w+"` mode.

### Key Characteristics of `"w+"` Mode:

1. **Read and Write**: You can read from and write to the file.
2. **File Creation**: If the file does not exist, it is created.
3. **Overwrite Content**: If the file exists, its content is erased, so the file starts empty.
4. **File Pointer**: The file pointer is positioned at the beginning of the file after opening.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in w+ mode
    fp = fopen("abc.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Write new content to the file
    fprintf(fp, "This is new content.\n");

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
