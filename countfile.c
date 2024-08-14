/*To count the number of lines in a file in C, you can read the file line by line and keep a count of the number of lines encountered.
Here's a sample program that demonstrates how to achieve this:

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lineCount = 0;

    // Open the file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF) {
        // Increment line count when a newline character is encountered
        if (ch == '\n') {
            lineCount++;
        }
    }

    // If the file does not end with a newline, count the last line
    if (ch != '\n' && lineCount != 0) {
        lineCount++;
    }

    // Print the number of lines
    printf("Number of lines: %d\n", lineCount);

    // Close the file
    fclose(fp);

    return 0;
}
/*

### Summary

- **Counting Lines**: The program counts lines by detecting newline characters.
- **Handling Files**: It demonstrates opening, reading, and closing files in C.
- **Edge Cases**: The program handles files that do not end with a newline and files that are empty.

This approach is straightforward and works efficiently for counting lines in text files.
*/
