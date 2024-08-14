#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;

    // Open the file in append mode
    fp = fopen("abc.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Append data to the file
    fprintf(fp, "Appending this line.\n");

    // Close the file
    fclose(fp);

    return 0;
}

