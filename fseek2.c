
//#### Example 2: Using `fseek()` to Move Relative to the Current Position


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

