#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in append and read mode
    fp = fopen("abc.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Append data to the file
    fprintf(fp, " Appending another line.\n");

    // Rewind the file pointer to the beginning
    rewind(fp);

    // Read and print the file content to verify the append operation
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;

}

/*
The append mode "a" or "a+" in file handling allows you to add new data to the end of a file without modifying the existing content.
"a" mode is used for writing and appending, while "a+" mode is used for both reading and appending.
After appending, always close the file with fclose() to ensure that all data is written to the file and resources are released.
*/
