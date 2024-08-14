
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[1024];  // Buffer to hold file content
    size_t bytesRead;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "rb");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "wb");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy the content from source file to destination file
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
/*
### Summary

- **Binary Mode**: Using `"rb"` and `"wb"` ensures that the file is copied exactly as it is,
which is useful for non-text files or ensuring that no data is altered during the process.
- **Buffering**: The program uses a buffer to read and write data in chunks, which is efficient for handling large files.
- **Error Handling**: It includes error handling for file operations to ensure that issues are reported and handled properly.
This program will copy the entire contents of `source.txt` into `destination.txt`.
 Make sure the source file exists and that you have write permissions for the destination file.
*/
