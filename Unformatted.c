#include <stdio.h>
#include <conio.h>  // For getch() and getche()

int main() {
    char c;
    char str[100];

    // Using getchar()
    printf("Press a key and then press enter (using getchar()): ");
    c = getchar();
    printf("You pressed: %c\n\n", c);

    // Clear the buffer
    while ((getchar()) != '\n');

    // Using getch()
    printf("Press a key (using getch()): ");
    c = getch();  // Does not wait for enter and does not echo
    printf("\nYou pressed: %c\n\n", c);

    // Using getche()
    printf("Press a key (using getche()): ");
    c = getche();  // Does not wait for enter and echoes the character
    printf("\nYou pressed: %c\n\n", c);

    // Clear the buffer
    while ((getchar()) != '\n');

    // Using gets() (deprecated and unsafe, use fgets() in real programs)
    printf("Enter a string (using gets()): ");
    gets(str);  // Unsafe and deprecated
    printf("You entered: %s\n", str);

    return 0;
}



/*
getchar(): Reads a single character from the standard input and waits for enter.
getch(): Reads a single character from the keyboard without waiting for enter and does not echo it.
getche(): Reads a single character from the keyboard, echoes it, and does not wait for enter.
gets(): Reads a line of text from the standard input but is unsafe and deprecated; use fgets() instead.

*getchar()
Library: <stdio.h>
Description: getchar() is a standard library function that reads a single character
from the standard input (usually the keyboard) and returns it as an int.
Usage:
int c;
c = getchar();  // Reads a single character from stdin and stores it in c
Note: It waits for the user to press a key and hit enter.

getch()
Library: <conio.h> (non-standard, mostly used in DOS/Windows environments)
Description: getch() is a function that reads a single character directly from the keyboard
without waiting for the enter key. It does not echo the character to the console.
Usage:
int c;
c = getch();  // Reads a single character directly from the keyboard
Note: Since it is non-standard, it might not be available on all systems or compilers.

getche()
Library: <conio.h> (non-standard, mostly used in DOS/Windows environments)
Description: getche() is similar to getch(), but it echoes the character to the console as it is typed.
Usage:
int c;
c = getche();  // Reads a single character from the keyboard and echoes it to the console
Note: Like getch(), it is non-standard and might not be available on all systems or compilers.

gets()
Library: <stdio.h> (deprecated)
Description: gets() is a function that reads a line of text from the
standard input (usually the keyboard) into a buffer until a newline character or EOF is encountered.
Usage:
char str[100];
gets(str);  // Reads a line of text into the str buffer

Note: gets() is considered unsafe and deprecated because it does not
perform bounds checking and can cause buffer overflows. It is better to use fgets() instead.

char str[100];
fgets(str, sizeof(str), stdin);  // Reads a line of text into the str buffer safely
*/
