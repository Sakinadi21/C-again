#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];

    // Open the file in read mode
    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Read the file line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);  // Print each line to the console
    }

    // Close the file
    fclose(fp);

    return 0;
}
