#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int a;
    float b;
    char str[20];

    // Open the file in read mode
    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Read formatted data from the file
    fscanf(fp, "%d %f %s", &a, &b, str);
    // Assuming the file has an integer, a float, and a string

    printf("Read values: %d, %.2f, %s\n", a, b, str);
    // Print the values to the console

    // Close the file
    fclose(fp);

    return 0;
}

