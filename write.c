#include <stdio.h>
#include <stdlib.h>

int main()  // Changed 'void main()' to 'int main()'
{
    FILE *fp = NULL;  // Corrected the initialization of the file pointer

    char ch = 'a';
    fp = fopen("abc.txt", "w");  // Open file in write mode

    if (fp == NULL)  // Check if the file was successfully opened
    {
        printf("Error opening file\n");
        exit(1);  // Exit the program with an error code
    }

    fputc(ch, fp);  // Write the character 'a' to the file
    fclose(fp);  // Corrected the typo from 'fcloase' to 'fclose'

    return 0;  // Added return statement
}
