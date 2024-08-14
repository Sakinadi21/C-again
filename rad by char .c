#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF) {  // EOF indicates the end of the file
        putchar(ch);
    // Print each character to the console
    }

    // Close the file
    fclose(fp);

    return 0;
}

