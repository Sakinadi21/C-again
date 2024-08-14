
//### Example 3: Using `fseek()` to Move Relative to the End of the File

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
