#include <stdio.h>
#include <conio.h>  // For putch()

int main() {
    // Using putchar()
    char c = 'A';
    printf("Using putchar(): ");
    putchar(c);  // Writes 'A' to the console
    putchar('\n');  // Writes a newline to the console

    // Using putch()
    c = 'B';
    printf("Using putch(): ");
    putch(c);  // Writes 'B' to the console
    putch('\n');  // Writes a newline to the console

    // Using puts()
    char str[] = "Hello, World!";
    printf("Using puts(): ");
    puts(str);  // Writes "Hello, World!" followed by a newline to the console

    return 0;
}
/*

putchar(): Writes a single character to the standard output.
putch(): Writes a single character directly to the console (non-standard).
puts(): Writes a string to the standard output followed by a newline character.


putchar()
Library: <stdio.h>
Description: putchar() is a standard library function that writes a
 single character to the standard output (usually the console).
Usage:
int c = 'A';
putchar(c);  // Writes the character 'A' to the console
Note: It returns the character written as an unsigned char cast to an int or EOF on error.


putch()
Library: <conio.h> (non-standard, mostly used in DOS/Windows environments)
Description: putch() is a function that writes a single character directly
to the console. It is similar to putchar() but specific to DOS/Windows environments.
Usage:
int c = 'A';
putch(c);  // Writes the character 'A' to the console
Note: Since it is non-standard, it might not be available on all systems or compilers.


puts()
Library: <stdio.h>
Description: puts() is a standard library function that writes a
string to the standard output followed by a newline character.
Usage:
char str[] = "Hello, World!";
puts(str);  // Writes "Hello, World!" followed by a newline to the console
Note: It automatically appends a newline character after the string.
*/
